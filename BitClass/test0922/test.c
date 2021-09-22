#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<malloc.h>

//void* malloc(size_t count) {
//
//}

//int* p = (int*)malloc(10 * sizeof(int));

//int main() {
//	int a = 0;
//	return 0;
//}

//int main() {
//	int* ptr = (int*)malloc(40);
//	int i = 0;
//	for (i = 0; i < 10; ++i)
//		*(ptr + i) = i;
//	int* p = (int*)realloc(ptr, 40);
//	if (p != NULL)
//		ptr = p;
//	else
//		return 0;
//	for (i = 10; i < 20; ++i)
//		*(ptr+i) = i;
//	for (i = 0; i < 20; ++i)
//		printf("%d ", *(ptr+i));
//	return 0;
//}


int main() {
	char* ptr = (char*)calloc(10, 1);
	scanf("%s", ptr);
	printf("%s", ptr);
	return 0;

}