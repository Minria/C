#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

//struct A{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};


//int main() {
//	struct S
//	{
//		char a : 3;
//		char b : 4;
//		char c : 5;
//		char d : 4;
//	};
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

//enum Day{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//enum Sex {
//	MALE,
//	FEMALE,
//	SECRET
//};
//enum Color{
//	RED,
//	GREEN,
//	BLUE
//};

//enum Color{
//	RED = 1,
//	GREEN = 2,
//	BLUE = 4
//};

//int main() {
//	//联合类型的声明
//	union Un
//	{
//		char c;
//		int i;
//	};
//	//联合变量的定义
//	union Un un;
//	//计算连个变量的大小
//	printf("%d\n", sizeof(un));
//}


//int main() {
//	union Un
//	{
//		int i;
//		char c;
//	};
//	union Un un;
//	// 下面输出的结果是一样的吗？
//	printf("%d\n", &(un.i));
//	printf("%d\n", &(un.c));
//	//下面输出的结果是什么？
//	un.i = 0x11223344;
//	un.c = 0x55;
//	printf("%x\n", un.i);
//}


//int main() {
//	union Un1{
//		char c[5];
//		int i;
//	};
//	union Un2{
//		short c[7];
//		int i;
//	};
//	//下面输出的结果是什么？
//	printf("%d\n", sizeof(union Un1));
//	printf("%d\n", sizeof(union Un2));
//	return 0;
//}

int main() {
	struct node {
		int a;
		int data[10];
		char i;
	}s;
	printf("%d", sizeof(s));
	return 0;
}