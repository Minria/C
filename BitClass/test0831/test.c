#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<malloc.h>

//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//void Calc(int(*p)(int, int)) {
//	int ret = (p)(3, 5);
//	printf("%d", ret);
//}
//int main() {
//	Calc(Add);
//	Calc(Sub);
//	return 0;
//}
//void bubbleSort(int* arr, int arrSize) {
//	int i = 0, j = 0;
//	for(i=0;i<arrSize-1;++i)
//		for (j = arrSize - 1; j > i; --j) {
//			if (arr[j] < arr[j - 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j - 1];
//				arr[j - 1] = temp;
//			}
//		}
//}
//int main() {
//	int arr[5] = { 5,4,3,2,1 };
//	bubbleSort(arr, 5);
//	return 0;
//}