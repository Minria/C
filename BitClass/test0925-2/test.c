#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main() {
//	char str1[20] = "xxxxxxxxx";
//	printf("%s\n", str1);
//	char str2[20] = "hello";
//	strcpy(str1, str2);
//	printf("%s\n", str1);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main() {
//	char str[] = "hello bit";
//	memset(str, 'x', 5);
//	printf("%s\n", str);
//
//}


//void swap(int a, int b);
//int main() {
//	int a = 10;
//	int b = 20;
//	swap(a, b);
//	printf("%d %d", a, b);
//	return 0;
//}
//void swap(int a, int b) {
//	a = a - b;
//	b = a + b;
//	a = b - a;
//	printf("%d %d\n", a, b);
//}


void swap(int a, int b);
int main() {
	int a = 10;
	int b = 20;
	swap(&a, &b);//将a，b的地址传过去
	printf("%d %d", a, b);
	return 0;
}
void swap(int* a, int* b) {
	*a = *a - *b;
	*b = *a + *b;
	*a = *b - *a;
}