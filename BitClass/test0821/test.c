#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<malloc.h>

//#define N 3
//#define Y(n) ((N+1)*n)
//int main() {
//	int z =2* (N * Y(5 + 1));
//	printf("%d", z);
//	return 0;
//}

//int main() {
//	printf("%f", (double)(10 / 4 * 4));
//	return 0;
//}


//int main() {
//	int i, x, y;
//	i = x = y = 0;
//	do {
//		++i;
//		if (i % 2)
//			x += i;
//		i++;
//		y += i++;
//	} while (i <= 7);
//	printf("%d %d %d", i, x, y);
//	return 0;
//}
//
//int main() {
//	int j = 4, i = j;
//	for (; i <= 2 * j; i++) {
//		switch (i/j)
//		{
//		case 0:
//		case 1:printf("*"); break;
//		case 2:printf("#"); break;
//		}
//	}
//	return 0;
//}
//int main() {
//	int x = 1, y = 012;
//	printf("%d", y);
//	return 0;
//}

//int main() {
//	int arr[] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&arr + 1);
//	printf("%d %d", *(arr + 1), *(ptr - 1));
//	return 0;
//}

//int main() {
//	unsigned short a = 0;
//	--a;
//	printf("%d", a);
//	return 0;
//}

//int main() {
//	int a = 2, * p1, ** p2;
//	p2 = &p1;
//	p1 = &a;
//	printf("%d %d %d", a, *p1, **p2);
//	return 0;
//}

//int main() {
//	int k, j, s;
//	for (k = 2; k < 6; ++k) {
//		s = 1;
//		for (j = k; j < 6; ++j)
//			s += j;
//	}
//	printf("%d", s);
//	return 0;
//}
//int main() {
//	int arr[] = { 6,7,8,9,10 };
//	int* ptr = arr;
//	*(ptr++) += 123;
//	printf("%d %d", *ptr, *(++ptr));
//	return 0;
//}

//int main() {
//	char s[] = "\\123456\123456\t";
//	printf("%s", strlen(s));
//	return 0;
//}

//int main() {
//	int s = 0, n = 0;
//	for (n = 0; n < 4; n++) {
//		switch (n) {
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
//	char* pcColor = "blue1";
//	char acColor[] = "blue1";
//	printf("%d", strlen(pcColor));
//	printf("%d", strlen(acColor));
//	printf("%d", sizeof(acColor));
//	printf("%d", sizeof(pcColor));
//	return 0;
//}
//
//int main() {
//	unsigned long ulA = 0x11000000;
//	printf("%x\n",*(unsigned char *)&ulA);
//	return 0;
//}
//void func(char str_arg[2]){
//	int m = sizeof(str_arg);
//	int n = strlen(str_arg);
//	printf("%d\n", m);
//	printf("%d\n", n);
//}
//int main() {
//	char str[] = "Hello";
//	func(str);
//	return 0;
//}

//int main() {
//    int a, x;
//    for (a = 0, x = 0; a <= 1 && !x++; a++) {
//        a++;
//    }
//    printf("%d %d", a, x);
//    return 0;
//}


//int main() {
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* p1 = (int*)(&a + 1);
//    int* p2 = (int*)((int)a + 1);
//    int* p3 = (int*)(a + 1);
//    printf("%d, %x, %d\n", p1[-1], p2[0], p3[1]);     return 0;
//}