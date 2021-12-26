

#include"head.h"
void print(int* nums, int numsSize) {
	for (int i = 0; i < numsSize; i++) {
		printf("%d ", nums[i]);
	}
	printf("\n");
}
int main() {
	int nums[] = { 16,2,3,14,15,6,7,11,9,0,10,8,13,12,4,5,1};
	int numsSize = sizeof(nums) / 4;
	//insertSort(nums, numsSize);
	//halfInsertSort(nums, numsSize);
	//shellSort(nums, numsSize);
	//bubbleSort(nums, numsSize);
	//quickSort(nums, 0, numsSize - 1);
	//selectSort(nums, numsSize);
	//heapSort(nums, numsSize);
	mergeSort(nums, numsSize);
	print(nums,numsSize);
	return 0;
}