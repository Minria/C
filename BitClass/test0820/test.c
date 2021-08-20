#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<malloc.h>

//void test(int arr[][5]){
//}
//void test(int arr[3][5]) {
//
//}
//void test(int(*arr)[5]) {
//
//}

//int main() {
//	char* str[3] = { "stra","strb","strc" };
//	char* p = str[0];
//	int i = 0;
//	while (i < 3) {
//		printf("%s ", p++);
//		++i;
//	}
//	return 0;
//}
//
//char* myString() {
//	char str[6] = { 0 };
//	char* s = "Hello World!";
//	for (int i = 0; i < sizeof(str) - 1; ++i)
//		str[i] = *(s + i);
//	return str;
//}
//int main() {
//	printf("%s\n", myString());
//	return 0;
//}

//int main() {
//	int i = 1;
//	printf("%d %d", sizeof(i++), i);
//	return 0;
//}

//int main() {
//    char a[1000];
//    int i;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = (char)(-1 - i);
//    }
//    printf("%d\n", strlen(a)); 
//    return 0;
//}

//int main() {
//	char str1[8] = { 'g','o','o','d','!' };
//	char str2[5] = "good!";
//	char* str3 = "good!";
//	char str4[5] = { 'g', 'o', 'o', 'd', '!' };
//	printf("%s\n %s\n %s\n %s\n", str1, str2, str3, str4);
//	return 0;
//}

//int fun(int x) {
//	int count = 0;
//	while (x) {
//		++count;
//		x = x & (x - 1);
//	}
//	return count;
//}
//int main() {
//	printf("%d", fun(2019));
//	return 0;
//}

//int func(int a) {
//	int b = 0;
//	static int c = 3;
//	a = c++, b++;
//	return a;
//}
//int main() {
//	int a = 2, i = 0, k = 0;
//	for (i = 0; i < 2; i++) {
//		k = func(a++);
//	}
//	printf("%d", k);
//	return 0;
//}


//int main() {
//	int s = 0, n;
//	for (n = 0; n < 4; n++) {
//		switch (n){
//		default:s += 4;
//		case 1:s += 1;
//		case 2:s += 2;
//		case 3:s += 3;
//		}
//	}
//	printf("%d", s);
//	return 0;
//}

//int main() {
//	int a = 6, n = 5;
//	a += n++;
//	printf("%d", a);
//	return 0;
//}
//
//int main() {
//	int a = 4;
//	a += a *= a + a;
//	printf("%d", a);
//	return 0;
//}