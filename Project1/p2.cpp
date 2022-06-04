#include<iostream>
using namespace std;


void TestFunc1(int a = 0)
{
	cout << a << endl;
}
void TestFunc2(int a = 10, int b = 20, int c = 30)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}

void TestFunc3(int a, int b = 10, int c = 20)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}
int main() {
	//cout << "hello word" << endl;
	//int a;
	//double b;
	//char c;
	//cin >> a;
	//cin >> b >> c;
	//cout << a << endl;
	//cout << b << "  " << c << endl;


	//TestFunc1(); // û�д���ʱ��ʹ�ò�����Ĭ��ֵ
	//TestFunc1(10); // ����ʱ��ʹ��ָ����ʵ��
	//TestFunc2();
	//TestFunc3(1);

	return 0;
}
