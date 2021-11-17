#include"head.h"


int main() {
	int nums[] = { 1,3,2,4,3,9,0,7,6,5,5,8 };
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	insertSort(nums,numsSize);
	for (int i = 0; i < numsSize; i++) {
		printf("%d ", nums[i]);
	}
	return 0;
}