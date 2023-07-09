#include<iostream>
#include<string>
using namespace std;


class Person{
    public:
    Person(int age,string name){
        this->age = age;
        this->name = name;
    }
    int age;
    string name;
};

// 函数模板
template<typename T>
void mySwap(T& a, T& b){
    T tmp = a;
    a = b;
    b = tmp;
}
template<class T>
void isEqu(T& a,T& b){
    if(a == b){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
template<> void isEqu(Person& a, Person& b){
    if(a.age != b.age){
        cout << "NO" << endl;
        return;
    }
    if(a.name != b.name){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}


int main(){
    int a = 10;
    int b = 20;
    // 自动类型推导，必须类型一致，并且不可以进行类型转换
    mySwap(a,b);
    cout << a << " " << b << endl;
    double c = 1.1;
    double d = 2.2;
    // 显示替换, 可以进行类型转换
    mySwap<double>(c,d);
    cout << c << " " << d << endl;
    int test_1 = 10;
    int test_2 = 10;
    isEqu(test_1,test_2);
    Person p1(18,"test");
    Person p2(18,"test");
    isEqu(p1,p2);
    return 0;
}