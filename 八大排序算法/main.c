#include"head.h"


int main() {
	int nums[] = { 1,3,2,4,6,5,9,8,7,0,10,15,14,13,12,11,1,2,3,4};
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	//insertSort(nums,numsSize);
	//halfInsertSort(nums, numsSize);
	//selectSort(nums, numsSize);
	//bubbleSort(nums, numsSize);
	quickSort(nums, 0, numsSize - 1);
	for (int i = 0; i < numsSize; i++) {
		printf("%d ", nums[i]);
	}
	return 0;
}