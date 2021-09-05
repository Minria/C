#include"main.h"
int main() {
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	InsertSort1(arr, arrSize);
	for (int i = 0; i < arrSize; ++i)
		printf("%d ", arr[i]);
	return 0;
}