#include<stdio.h>


// ¶ş·Ö²éÕÒ
int binaryFind(int* nums, int numsSize,int target) {
	int left = 0;
	int right = numsSize - 1;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (nums[mid] == target) {
			return mid;
		}
		else if (nums[mid] > target) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
	return -1;
}

int main() {
	int nums[] = { 1,2,4,6,8,9,13,34,231,23242 };
	int numsSize = sizeof(nums) / 4;
	int ret = binaryFind(nums, numsSize, 9);
	printf("%d", ret);
	return 0;
}