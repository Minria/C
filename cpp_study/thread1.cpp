#include <iostream>
#include <thread>
#include <string>
using namespace std;

void fun1(){
    cout << "函数1输出1" << endl;
    cout << "函数1输出2" << endl;
    cout << "函数1输出3" << endl;
    cout << "函数1输出4" << endl;
    cout << "函数1输出5" << endl;
}
void fun2(){
    cout << "函数2输出1" << endl;
    cout << "函数2输出2" << endl;
    cout << "函数2输出3" << endl;
    cout << "函数2输出4" << endl;
    cout << "函数2输出5" << endl;
}
class Person{
    public:
    int p_i;
    Person(int& i){
        this->p_i = i;
    }
    void operator()(){
        cout << p_i << endl;
    }
};
int main(){
    thread mythread1(fun1);
    thread mythread2(fun2);
    // cpp一般需要子线程在主线程之前结束，因为主线程结束也会干扰子线程的运行
    // join等待主线程
    mythread1.join();
    mythread2.join();
    // detach不等待主线程,跑到后台，但是无法使用join再控制它
    // mythread1.detach();
    // mythread2.detach();
    int i = 10;
    // 使用类来创造一个线程
    Person p(i);
    thread mythread3(p);
    mythread3.detach();
    return 0;
}