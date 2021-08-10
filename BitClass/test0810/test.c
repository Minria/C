#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>




//int main() {
//	char ch = 'w';
//	char* p1 = &ch;
//	char* p2 = "hello word";//将常量字符串的第一个值地址赋给指针
//	printf("%c\n", *(p2 + 1));
//	printf("%s\n", p2);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char* str3 = "hello bit.";
//	char* str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}


//int main() {
//	char* arr[20];
//	int* arr2[20];
//	return 0;
//}


//int main() {
//	int arr[10] = { 0 };
//	int* p = arr;//arr是数组首元素地址
//	int (*parr)[10] = &arr;
//	return 0;
//}



void print1(int (*parr)[10], int n) {
	int i = 0;
	for (i = 0; i < n; i++)
		printf("%d ", *(*(parr + 0) + i));
	printf("\n");
}
void print2(int (*parr2)[5], int cow, int col) {
	int i = 0,j = 0;
	for (i = 0; i < cow; i++) {
		for (j = 0; j < col; j++)
			printf("%d ", *(*(parr2 + i) + j));
		printf("\n");
	}
}

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int arr2[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print1(arr, 10);
	printf("\n");
	print2(&arr2, 3, 5);
	printf("---------------\n");
	int(*parr)[5] = &arr2;
	int i = 0, j = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++)
			printf("%d ", *(*(parr + i) + j));
		printf("\n");
	}
	return 0;
}