#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	int i = 0, j = 0;
	for (i = 0; i < numsSize - 1; i++) {
		for (j = i + 1; j < numsSize; j++) {
			if (nums[j] == target - nums[i]) {
				int* ret = malloc(sizeof(int) * 2);
				ret[0] = i, ret[1] = j;
				*returnSize = 2;
				return ret;
			}
		}
	}
	*returnSize = 0;
	return NULL;
}
int main() {
	int nums[] = { 1,2,3,4,5,6,7,8 };
	int size = sizeof(nums) / sizeof(nums[0]);
	int target = 10;
	int* returnSize = 0;
	int* ret[2] = { 0 };
	ret[2] = twoSum(nums, size, target, returnSize);
	printf("%d %d", ret[0], ret[1]);
	return 0;
}