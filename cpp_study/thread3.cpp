#include <iostream>
#include <thread>
#include <vector>
#include <list>
#include <mutex>
using namespace std;
void func1(int i){
    cout << "线程" << i << "开始执行" << endl;
    cout << "线程" << i << "执行结束" << endl;
}
void test1(){
    vector <thread> threads;
    for(int i = 0; i < 10; i++){
        threads.push_back(thread(func1,i));
    }
    for(auto i = threads.begin(); i != threads.end(); ++i){
        i->join();
    }
    cout << "主线程结束" << endl;
}
// 都只读数据
int tmp = 10;
void func2(int i){
    cout << "线程" << i << "读取" << tmp << endl;
}
void test2(){
    vector <thread> threads;
    for(int i = 0; i < 10; i++){
        threads.push_back(thread(func2,i));
    }
    for(auto i = threads.begin(); i != threads.end(); ++i){
        i->join();
    }
    cout << "主线程结束" << endl;
}
//lock加锁，unlock解锁
//lock和unlock需要成对使用
class A{
    public:
    void insert(){
        for(int i = 0; i < 10; i++){
            my_mutex.lock();
            string msg = "user:";
            msg = msg + to_string(i);
            msg = msg + " insert cmd";
            cout << msg << endl;
            queue.push_back(msg);
            my_mutex.unlock();
        }
    }
    void exe(){
        for(int i = 0; i < 30; i++){
            if(!queue.empty()){
                my_mutex.lock();
                string msg = queue.front();
                msg = "exe:" +msg;
                cout << msg << endl;
                queue.pop_front();
                my_mutex.unlock();
            }else{
                cout << "current queue is null" << endl;
            }
        }
    }
    private:
    mutex my_mutex;
    std::list<string> queue;
};
void test3(){
    A a;
    thread mythread(&A::insert,&a);
    thread mythread2(&A::exe,&a);
    mythread2.join();
    mythread.join();
    cout << "end" << endl; 
}
// lock_guard<mutex> sbguard(myMutex);取代lock()和unlock()
// lock_guard构造函数执行了mutex::lock();在--作用域--结束时，调用析构函数，执行mutex::unlock()
class B{
    public:
    void insert(){
        for(int i = 0; i < 10; i++){
            lock_guard<mutex> sbguard(my_mutex);
            string msg = "user:";
            msg = msg + to_string(i);
            msg = msg + " insert cmd";
            cout << msg << endl;
            queue.push_back(msg);
        }
    }
    void exe(){
        for(int i = 0; i < 30; i++){
            if(!queue.empty()){
                lock_guard<mutex> sbguard(my_mutex);
                string msg = queue.front();
                msg = "exe:" +msg;
                cout << msg << endl;
                queue.pop_front();
            }else{
                cout << "current queue is null" << endl;
            }
        }
    }
    private:
    mutex my_mutex;
    std::list<string> queue;
};
void test4(){
    B b;
    thread mythread(&B::insert,&b);
    thread mythread2(&B::exe,&b);
    mythread2.join();
    mythread.join();
    cout << "end" << endl; 
}
// std::lock(mutex1,mutex2……); 可以一次加多个锁
// std::lock_guardstd::mutex my_guard(my_mutex,std::adopt_lock);
// 加入adopt_lock后，在调用lock_guard的构造函数时，不再进行lock();
// adopt_guard为结构体对象，起一个标记作用，表示这个互斥量已经lock()，不需要在lock()。
class C{
    public:
    void insert(){
        for(int i = 0; i < 10; i++){
            std::lock(my_mutex, my_mutex2);
            std::lock_guard<std::mutex>  my_guard(my_mutex,std::adopt_lock);
            std::lock_guard<std::mutex>  my_guard2(my_mutex2,std::adopt_lock);
            string msg = "user:";
            msg = msg + to_string(i);
            msg = msg + " insert cmd";
            cout << msg << endl;
            queue.push_back(msg);
        }
    }
    void exe(){
        for(int i = 0; i < 30; i++){
            if(!queue.empty()){
                std::lock(my_mutex, my_mutex2);
                std::lock_guard<std::mutex>  my_guard(my_mutex,std::adopt_lock);
                std::lock_guard<std::mutex>  my_guard2(my_mutex2,std::adopt_lock);
                string msg = queue.front();
                msg = "exe:" +msg;
                cout << msg << endl;
                queue.pop_front();
            }else{
                cout << "current queue is null" << endl;
            }
        }
    }
    private:
    mutex my_mutex;
    mutex my_mutex2;
    std::list<string> queue;
};
void test5(){
    C c;
    thread mythread(&C::insert, &c);
    thread mythread2(&C::exe, &c);
    mythread2.join();
    mythread.join();
    cout << "end" << endl; 
}
// unique_lock比lock_guard灵活很多（多出来很多用法），效率差一点。
// unique_lock<mutex> myUniLock(myMutex);
// 2.unique_lock的第二个参数
// 2.1 std::adopt_lock：
// 表示这个互斥量已经被lock()，即不需要在构造函数中lock这个互斥量了。
// 前提：必须提前lock
// lock_guard中也可以用这个参数
// 2.2 std::try_to_lock：
// 尝试用mutex的lock()去锁定这个mutex，但如果没有锁定成功，会立即返回，不会阻塞在那里；
// 使用try_to_lock的原因是防止其他的线程锁定mutex太长时间，导致本线程一直阻塞在lock这个地方
// 前提：不能提前lock();
// owns_lock()方法判断是否拿到锁，如拿到返回true
// 2.3 std::defer_lock：
// 如果没有第二个参数就对mutex进行加锁，加上defer_lock是始化了一个没有加锁的mutex
// 不给它加锁的目的是以后可以调用unique_lock的一些方法
class D{
    public:
    void insert(){
        for(int i = 0; i < 10; i++){
            my_mutex.lock();
            unique_lock<mutex> mylock(my_mutex, std::adopt_lock);
            string msg = "user:";
            msg = msg + to_string(i);
            msg = msg + " insert cmd";
            cout << msg << endl;
            queue.push_back(msg);
        }
    }
    void exe(){
        for(int i = 0; i < 30; i++){
            if(!queue.empty()){
                my_mutex.lock();
                unique_lock<mutex> mylock(my_mutex, std::adopt_lock);
                string msg = queue.front();
                msg = "exe:" +msg;
                cout << msg << endl;
                queue.pop_front();
            }else{
                cout << "current queue is null" << endl;
            }
        }
    }
    private:
    mutex my_mutex;
    std::list<string> queue;
};
void test6(){
    D d;
    thread mythread(&D::insert, &d);
    thread mythread2(&D::exe, &d);
    mythread2.join();
    mythread.join();
    cout << "end" << endl; 
}
int main(){
    // test1();
    // test2();
    // test3();
    // test4();
    // test5();
    test6();
}
