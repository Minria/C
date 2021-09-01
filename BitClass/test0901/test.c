#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<malloc.h>

//int main() {
//	int arr[2][5] = { 1,2,3,4,5,6,7,8,9,0 };
//	int* p = (int*)(&arr+1);
//	printf("%d", *(p-1));
//	return 0;
//}

//void print(int* arr,int num) {
//	for (int i = 0; i < num; ++i)
//		printf("%d ", arr[i]);
//}
//int cmp(const void* e1, const void* e2) {
//	return *(int*)e1 - *(int*)e2;
//}
//void Swap(char* buf1, char* buf2, int width){
//	int i = 0;
//	for (i = 0; i < width; i++){
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void BubbleSort(void* base, size_t num, size_t width, int (*cmp)(const void*, const void*))
//{
//	size_t i = 0, j = 0;
//	for (i = 0; i < num - 1; i++)
//		for (j = 0; j < num - 1 - i; j++){
//			if (cmp((char*)base+j*width, (char*)base+(j+1)*width)>0){
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//}
//int main() {
//	int arr[] = { 1,4,23,3,8,34,0,43,13,5,23412 };
//	size_t num = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, num, sizeof(arr[0]), cmp);
//	print(arr,num);
//	return 0;
//}


int main() {
	short a = -32767;
	unsigned short usi = a;
	return 0;
}