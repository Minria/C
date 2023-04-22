
#include<iostream>

using namespace std;
//class Solution {
//public:
//	Solution(){}
//	Solution(int age) {
//		this->age = age;
//	}
//	void show_message() {
//		cout << "age=" << age << endl;
//	}
//public:
//	char* name;
//	int age;
//};
//将整个对象复制一份，修改后不影响原来的值
//void testFunc(Solution s){
//	s.age = 10;
//}
////只传一个地址过来，可以修改原来的值
//void testFunc2(Solution* s){
//	s->age = 10;
//}
//// 传一个引用过来
//void testFunc3(Solution& s){
//	s.age = 88;
//}
//int main() {
//	Solution* s = new Solution(91);
//	Solution s1(90);
//	// .是一个实例对象
//	// ->是地址
//	s->show_message();
//	s1.show_message();
//	testFunc(s1);
//	testFunc2(s);
//	s1.show_message();
//	s->show_message();
//	testFunc3(s1);
//	s1.show_message();
//	return 0;


//class A1 {
//public:
//	void f1() {}
//private:
//	int _a;
//};
//// 类中仅有成员函数
//class A2 {
//public:
//	void f2() {}
//};
//// 类中什么都没有---空类
//class A3
//{};

//int main() {
//	cout << sizeof(A1) << endl; // 4
//	cout << sizeof(A2) << endl; // 1
//	cout << sizeof(A3) << endl; // 1
//}


//class A{
//public:
//	void PrintA(){
//		cout << _a << endl;
//	}
//	void Show(){
//		cout << "Show()" << endl;
//	}
//private:
//	int _a;
//};
//int main(){
//	A* p = nullptr;
//	p->PrintA();
//	p->Show();
//	return 0;
//}

class Date{
public:
	Date(int year = 1900, int month = 1, int day = 1){
		_year = year;
		_month = month;
		_day = day;
	}
	//private:
	int _year;
	int _month;
	int _day;
};
// 这里会发现运算符重载成全局的就需要成员变量是共有的，那么问题来了，封装性如何保证？
// 这里其实可以用我们后面学习的友元解决，或者干脆重载成成员函数。
bool operator==(const Date& d1, const Date& d2){
	return d1._year == d2._year 
		&& d1._month == d2._month
		&& d1._day == d2._day;
}
// int main() {
// 	Date d1(2018, 9, 26);
// 	Date d2(2018, 9, 27);
// 	cout << (d1 == d2) << endl;
// 	return 0;
// }

