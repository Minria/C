#include<stdio.h>

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8 };
	int* p = arr;
	printf("%d\n", *p++);
	printf("%d\n", *p);
}