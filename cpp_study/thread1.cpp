#include <iostream>
#include <thread>
#include <string>
using namespace std;

void fun1(){
    cout << "����1���1" << endl;
    cout << "����1���2" << endl;
    cout << "����1���3" << endl;
    cout << "����1���4" << endl;
    cout << "����1���5" << endl;
}
void fun2(){
    cout << "����2���1" << endl;
    cout << "����2���2" << endl;
    cout << "����2���3" << endl;
    cout << "����2���4" << endl;
    cout << "����2���5" << endl;
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
    // cppһ����Ҫ���߳������߳�֮ǰ��������Ϊ���߳̽���Ҳ��������̵߳�����
    // join�ȴ����߳�
    mythread1.join();
    mythread2.join();
    // detach���ȴ����߳�,�ܵ���̨�������޷�ʹ��join�ٿ�����
    // mythread1.detach();
    // mythread2.detach();
    int i = 10;
    // ʹ����������һ���߳�
    Person p(i);
    thread mythread3(p);
    mythread3.detach();
    return 0;
}