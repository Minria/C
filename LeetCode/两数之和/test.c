#define _CRT_SECURE_NO_WARNINGS
//首想暴力遍历法
#include<stdio.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	int i = 0, j = 0;
	for (i = 0; i < numsSize - 1; i++) {
		for (j = i + 1; j < numsSize; j++) {
			if (nums[j] == target - nums[i]) {
				returnSize[0] = i;
				returnSize[1] = j;
				return returnSize;
			}
		}
	}
}
int main() {
	int nums[] = { 1,2,3,4,5,6,7,8 };
	int size = sizeof(nums) / sizeof(nums[0]);
	int target = 10;
	int returnSize[2] = { 0 };
	returnSize[2]= twoSum(nums, size, target, returnSize);
	printf("%d %d", returnSize[0], returnSize[1]);
	return 0;
}