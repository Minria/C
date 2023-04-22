#include<iostream>
using namespace std;


// int main() {
// 	 //Cpp的输入输出
// 	int a = 0;
// 	char s[10]; // 还是C语言的字符串
// 	cout << "hello world" << endl;
// 	cin >> a >> s;
// 	cout << a << s << endl;
// 	return 0;
// }

//int main() {
//	//Cpp的引用
//	int a = 10;
//	int& ra = a; // 引用只是起了一个别名
//	cout << a << " " << ra << endl;
//	cout << &a << " " << &ra << endl;
//	return 0;
//}

// 缺省参数
void print_number(int a = 0) {
	cout << a << endl;
}
//int main() {
//	print_number();
//	print_number(10);
//	return 0;
//}

// 函数重载

int add(int a, int b) {
	return a + b;
}
double add(double a, double b) {
	return a + b;
}
//int main() {
//	cout << add(1, 2) << endl;
//	cout << add(1.2, 3.4) << endl;
//}

// auto关键字

int TestAuto(){
	return 10;
}
//int main(){
//	int a = 10;
//	auto b = a;
//	auto c = 'a';
//	auto d = TestAuto();
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//	//auto e; 无法通过编译，使用auto定义变量时必须对其进行初始化
//	return 0;
//}


// for语法

// int main() {
// 	int nums[] = { 1,2,3,4,5,6,7,8 };
// 	for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++) {
// 		cout << nums[i] << endl;
// 	}
// 	for (auto e : nums) {
// 		cout << e << endl;
// 	}
// 	for (auto& e : nums) {
// 		cout << e << endl;
// 	}
// 	return 0;
// }