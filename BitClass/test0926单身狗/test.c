#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

void quickSort(int* nums, int left, int right) {
	if (left >= right)
		return;
	int i = left, j = right;
	int temp = nums[i];
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
void findSingleDog(int* nums, int numsSize, int* arr) {
	quickSort(nums, 0, numsSize-1);
	int i = 0;
	int flag = 0;
	while (i < numsSize-1) {
		if (i == 0 && nums[0] != nums[1]) {
			arr[flag++] = nums[0];
			++i;
		}
		if (nums[i] == nums[i + 1]) {
			i += 2;
		}
		else {
			arr[flag++] = nums[i];
			++i;
		}
		if (flag == 2)
			break;
	}
	if (flag == 1)
		arr[i] = nums[numsSize - 1];
}
int main() {
	int nums[] = { 1,3,2,2,4,5,5,4,6,7,7,6 };
	int numsSize = sizeof(nums) / 4;
	int arr[2] = { 0 };
	findSingleDog(nums, numsSize, arr);
	printf("%d %d", arr[0], arr[1]);
	return 0;
}