

#include"head.h"
void print(int* nums, int numsSize) {
	for (int i = 0; i < numsSize; i++) {
		printf("%d ", nums[i]);
	}
	printf("\n");
}
int main() {
	int nums[] = { 16,2,3,14,15,6,7,11,9,0,10,8,13,12,4,5,1,1,2,45,342,2131,342,534,2321,1213,342,1231,4341,231,57654,234242 };
	int numsSize = sizeof(nums) / 4;
	insertSort(nums, numsSize);
	// halfInsertSort(nums, numsSize);
	// shellSort(nums, numsSize);
	// bubbleSort(nums, numsSize);
	 //quickSort(nums, 0, numsSize - 1);
	// selectSort(nums, numsSize);
	// heapSort(nums, numsSize);
	mergeSort(nums, numsSize);
	print(nums,numsSize);
	return 0;
}