

#include"head.h"
void print(int* nums, int numsSize) {
	for (int i = 0; i < numsSize; i++) {
		printf("%d ", nums[i]);
	}
	printf("\n");
}
int main() {
	int arr[] = { 2,4,3,5,6,1,3,4 };
//	insertSort(arr, 8);
	print(arr, 8);
	return 0;
}