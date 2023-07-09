#include <iostream>
#include <thread>
#include <string>
#include <mutex>
using namespace std;

mutex my_mutex;
once_flag g_flag;
class MyCAS{
    private:
    static MyCAS* m_instance;
    MyCAS(){}
    static void create_instance(){
        m_instance = new MyCAS();
        cout << "启动构造函数" << endl;
    }
    public:
    static MyCAS* get_instance(){
        // if(m_instance==nullptr){
        //     my_mutex.lock();
        //     if(m_instance==nullptr){
        //         m_instance = new MyCAS();
        //         cout << "启动构造函数" << end;;
        //     }
        //     my_mutex.unlock();
        // }else{
        //     cout << "实例存在" << endl;
        // }
        call_once(g_flag, create_instance);
        return m_instance;
    }
};
MyCAS* MyCAS::m_instance = nullptr;
void test1(){
    MyCAS* m_a = MyCAS::get_instance();
    MyCAS* m_b = MyCAS::get_instance();
    cout << *&m_a << endl;
    cout << *&m_b << endl;
}
void func1(){
    for(int i = 0; i < 10; i++){
        MyCAS* m_a = MyCAS::get_instance();
    }
}
void test2(){
    thread thread1(func1);
    thread thread2(func1);
    thread thread3(func1);
    thread thread4(func1);
    thread thread5(func1);
    thread1.join();
    thread2.join();
    thread3.join();
    thread4.join();
    thread5.join();
}
int main(){
    // test1();
    test2();
    return 0;
}