#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

//void* my_memove(void* dest,const void* src, size_t count) {
//	if (dest > src) {
//		while (count--) {
//			*(char*)dest = *(char*)src;
//			dest=(char*)dest+1;
//		}
//
//
//	}
//}


//struct num {
//	char a;
//	int b;
//}b1, b2;
//struct num b3;
//int main() {
//	struct num b4;
//	return 0;
//}
//struct {
//	char a;
//	int b;
//}b1,b2;


//struct node {
//	// ˝æ›”Ú
//	int data;
//	//÷∏’Î”Ú
//	struct node* next;
//};

//struct Node {
//	char a;
//	char b;
//	int c;
//}S;
//int main() {
//	printf("%d\n", sizeof(S));
//	return 0;
//}

//struct A {
//	int _a : 2;//2bit
//	int _b : 5;//5bit
//	int _c : 10;//10bit
//	int _d : 30;//30bit
//};



//enum color {
//	blue,
//	red
//};
//int main() {
//	printf("%d",blue);
//	printf("%d", red);
//
//	return 0;
//}

//enum color {
//	blue=4,
//	red=8
//};
//int main() {
//	enum color c = blue;
//	printf("%d", blue);
//	printf("%d", red);
//	printf("%d", c);
//	return 0;
//}

union un {
	char a;
	int b;
};
int main() {
	union un c = { 0 };
	printf("%d", sizeof(c));
	return 0;
}