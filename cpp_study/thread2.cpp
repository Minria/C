#include <iostream>
#include <thread>
#include <string>
using namespace std;

class A {
public:
	mutable int m_i; //m_i即使实在const中也可以被修改
	A(int i) :m_i(i) {}
};
void func1(const int& i, char* s){
    //detach后
    cout << i << endl; // 尽管使用的是引用，但是值传递；传来的值是拷贝的，地址不同。不推荐使用，可以修改为const int i
    cout << "i的地址:" << &i << endl;
    cout << s << endl; // 指针的detach绝对有问题，这里的s和str指向同一块内存
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
    //detach后
    // 因为存在主线程运行完了，str被回收了，系统将str隐式类型转换成string
	// 推荐先创建一个临时对象thread myThread(func1, tmp, string(str));就绝对安全了
    cout << i << endl; 
    cout << "i的地址:" << &i << endl;
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
// 1、如果传递int这种简单类型，推荐使用值传递，不要用引用
// 2、如果传递类对象，避免使用隐式类型转换，全部都是创建线程这一行就创建出临时对象，
//    然后在函数参数里，用引用来接，否则还会创建出一个对象
// 3、终极结论：建议不使用detach
void func3(const A& p){
    p.m_i = 9999;
    cout << "p的地址是 " << &p << "  thread = " << std::this_thread::get_id() << endl;
}
void test3(){
    
    A a(10);
	//myPrint(const A& pmybuf)中引用不能去掉，如果去掉会多创建一个对象
	//const也不能去掉，去掉会出错
	//即使是传递的const引用，但在子线程中还是会调用拷贝构造函数构造一个新的对象，
	//所以在子线程中修改m_i的值不会影响到主线程
	//如果希望子线程中修改m_i的值影响到主线程，可以用thread myThread(myPrint, std::ref(myObj));
	//这样const就是真的引用了，myPrint定义中的const就可以去掉了，类A定义中的mutable也可以去掉了
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