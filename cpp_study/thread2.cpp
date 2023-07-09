#include <iostream>
#include <thread>
#include <string>
using namespace std;

class A {
public:
	mutable int m_i; //m_i��ʹʵ��const��Ҳ���Ա��޸�
	A(int i) :m_i(i) {}
};
void func1(const int& i, char* s){
    //detach��
    cout << i << endl; // ����ʹ�õ������ã�����ֵ���ݣ�������ֵ�ǿ����ģ���ַ��ͬ�����Ƽ�ʹ�ã������޸�Ϊconst int i
    cout << "i�ĵ�ַ:" << &i << endl;
    cout << s << endl; // ָ���detach���������⣬�����s��strָ��ͬһ���ڴ�
}
void test1(){
    int num = 10;
    int& tmp = num;
    char str[] = "hello world";
    cout << &tmp << endl;
    cout << &str << endl;
    thread mythread1(func1,tmp,str);
    mythread1.detach();
}
void func2(const int i, const string& s){
    //detach��
    // ��Ϊ�������߳��������ˣ�str�������ˣ�ϵͳ��str��ʽ����ת����string
	// �Ƽ��ȴ���һ����ʱ����thread myThread(func1, tmp, string(str));�;��԰�ȫ��
    cout << i << endl; 
    cout << "i�ĵ�ַ:" << &i << endl;
    cout << s << endl; 
}
void test2(){
    int num = 10;
    int& tmp = num;
    char str[] = "hello world";
    cout << &tmp << endl;
    cout << &str << endl;
    // thread mythread1(func1,tmp,str);
    thread mythread1(func1,tmp,string(str));
    mythread1.detach();
}
// 1���������int���ּ����ͣ��Ƽ�ʹ��ֵ���ݣ���Ҫ������
// 2�������������󣬱���ʹ����ʽ����ת����ȫ�����Ǵ����߳���һ�оʹ�������ʱ����
//    Ȼ���ں�����������������ӣ����򻹻ᴴ����һ������
// 3���ռ����ۣ����鲻ʹ��detach
void func3(const A& p){
    p.m_i = 9999;
    cout << "p�ĵ�ַ�� " << &p << "  thread = " << std::this_thread::get_id() << endl;
}
void test3(){
    
    A a(10);
	//myPrint(const A& pmybuf)�����ò���ȥ�������ȥ����ഴ��һ������
	//constҲ����ȥ����ȥ�������
	//��ʹ�Ǵ��ݵ�const���ã��������߳��л��ǻ���ÿ������캯������һ���µĶ���
	//���������߳����޸�m_i��ֵ����Ӱ�쵽���߳�
	//���ϣ�����߳����޸�m_i��ֵӰ�쵽���̣߳�������thread myThread(myPrint, std::ref(myObj));
	//����const������������ˣ�myPrint�����е�const�Ϳ���ȥ���ˣ���A�����е�mutableҲ����ȥ����
	thread myThread(func3, a);
	myThread.join();
	//myThread.detach();

	cout << "Hello World!" << endl;
}
int main(){
    // test1();
    // test2();
    test3();
}