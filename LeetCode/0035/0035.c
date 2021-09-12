#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

int searchInsert(int* nums, int numsSize, int target) {
	int left = 0, right = numsSize - 1;
	int mid = 0;
	while (left < right) {
		mid = (left + right) / 2;
		if (nums[mid] == target)
			return mid;
		else if (nums[mid] > target)
			right = mid - 1;
		else
			left = mid + 1;
	}
	mid = (right + left) / 2;
	if (nums[mid] >= target)
		return mid;
	else
		return mid + 1;
}
int main() {
	int nums[] = { 1,3,5,6 };
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int target = 3;
	printf("%d", searchInsert(nums, numsSize, target));
	return 0;
}