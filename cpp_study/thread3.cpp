#include <iostream>
#include <thread>
#include <vector>
#include <list>
#include <mutex>
using namespace std;
void func1(int i){
    cout << "�߳�" << i << "��ʼִ��" << endl;
    cout << "�߳�" << i << "ִ�н���" << endl;
}
void test1(){
    vector <thread> threads;
    for(int i = 0; i < 10; i++){
        threads.push_back(thread(func1,i));
    }
    for(auto i = threads.begin(); i != threads.end(); ++i){
        i->join();
    }
    cout << "���߳̽���" << endl;
}
// ��ֻ������
int tmp = 10;
void func2(int i){
    cout << "�߳�" << i << "��ȡ" << tmp << endl;
}
void test2(){
    vector <thread> threads;
    for(int i = 0; i < 10; i++){
        threads.push_back(thread(func2,i));
    }
    for(auto i = threads.begin(); i != threads.end(); ++i){
        i->join();
    }
    cout << "���߳̽���" << endl;
}
//lock������unlock����
//lock��unlock��Ҫ�ɶ�ʹ��
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
// lock_guard<mutex> sbguard(myMutex);ȡ��lock()��unlock()
// lock_guard���캯��ִ����mutex::lock();��--������--����ʱ����������������ִ��mutex::unlock()
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
// std::lock(mutex1,mutex2����); ����һ�μӶ����
// std::lock_guardstd::mutex my_guard(my_mutex,std::adopt_lock);
// ����adopt_lock���ڵ���lock_guard�Ĺ��캯��ʱ�����ٽ���lock();
// adopt_guardΪ�ṹ�������һ��������ã���ʾ����������Ѿ�lock()������Ҫ��lock()��
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
// unique_lock��lock_guard���ܶࣨ������ܶ��÷�����Ч�ʲ�һ�㡣
// unique_lock<mutex> myUniLock(myMutex);
// 2.unique_lock�ĵڶ�������
// 2.1 std::adopt_lock��
// ��ʾ����������Ѿ���lock()��������Ҫ�ڹ��캯����lock����������ˡ�
// ǰ�᣺������ǰlock
// lock_guard��Ҳ�������������
// 2.2 std::try_to_lock��
// ������mutex��lock()ȥ�������mutex�������û�������ɹ������������أ��������������
// ʹ��try_to_lock��ԭ���Ƿ�ֹ�������߳�����mutex̫��ʱ�䣬���±��߳�һֱ������lock����ط�
// ǰ�᣺������ǰlock();
// owns_lock()�����ж��Ƿ��õ��������õ�����true
// 2.3 std::defer_lock��
// ���û�еڶ��������Ͷ�mutex���м���������defer_lock��ʼ����һ��û�м�����mutex
// ������������Ŀ�����Ժ���Ե���unique_lock��һЩ����
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
