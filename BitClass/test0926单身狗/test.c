#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

void quickSort(int* nums, int left, int right) {
	if (left >= right)
		return;
	int i = left, j = right;
	int temp = nums[left];
	while (i < j) {
		while (i < j && temp <= nums[j]) {
			--j;
		}
		nums[i] = nums[j];
		while (i < j && temp >= nums[i]) {
			++i;
		}
		nums[j] = nums[i];
	}
	nums[i] = temp;
	quickSort(nums, left, i);
	quickSort(nums, i + 1, right);
}
int* findSingleDog(int* nums, int numsSize, int* arr) {
	quickSort(nums, 0, numsSize);
	int i = 0;
	int flag = 0;
	return arr;
}