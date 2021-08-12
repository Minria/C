#define _CRT_SECURE_NO_WARNINGS
#include"test.h"
void InsertSort1(int* nums, int numsSize) {
	if (numsSize < 2)
		return;
	int i = 0;
	for (i = 1; i < numsSize; i++) {
		if (nums[i] < nums[i - 1]) {
			int temp = nums[i];
			int j = 0;
			for (j = i - 1; temp < nums[j] && j >= 0; j--)
				nums[j + 1] = nums[j];
			nums[j + 1] = temp;
		}
	}
}

void InsertSort2(int* nums, int numsSize) {
	int i = 0;
	for (i = 1; i < numsSize; i++) {
		int temp = nums[i];
		int left = 0, right = i - 1;
		while (left <= right) {
			int mid = (left + right) / 2;
			if (nums[mid] > temp)
				right = mid - 1;
			else
				left = mid + 1;
		}
		for (int j = i - 1; j >= right + 1; j--)
			nums[j + 1] = nums[j];
		nums[right + 1] = temp;
	}
}
void ShellSort(int* nums, int numsSize) {
	int d = 0;
	for (d = numsSize / 2; d >= 1; d = d / 2)
		for (int i = d + 1; i < numsSize; i++) {
			if (nums[i] < nums[i - d]) {
				int temp = nums[i];
				int j = 0;
				for (j = i - d; j > 0 && temp < nums[j]; j--)
					nums[j + d] = nums[j];
				nums[j + 1] = temp;
			}
		}
}

void BubbleSort(int* nums, int numsSize) {
	int i = 0, j = 0;
	for (i = 0; i < numsSize - 1; i++) {
		int flag = 0;
		for (j = numsSize - 1; j > i; j--) {
			if (nums[j - 1] > nums[j]) {
				int temp = nums[j - 1];
				nums[j - 1] = nums[j];
				nums[j] = temp;
				flag = 1;
			}
		}
		if (flag == 0)
			return;
	}
}
void QuickSort(int* nums, int left,int right) {
	if (left > right)
		return;
	int temp = nums[left];
	int i = left, j = right;
	while (i < j) {
		while (i < j && temp <= nums[j])
			j--;
		nums[i] = nums[j];
		while (i < j && temp >= nums[i])
			i++;
		nums[j] = nums[i];
	}
	nums[i] = temp;
	QuickSort(nums, left, i-1);
	QuickSort(nums, i + 1, right);
}
void SelectSort(int* nums, int numsSize) {
	int i = 0,j=0;
	for (i = 0; i < numsSize - 1; i++) {
		int min = i;
		for (j = i + 1; j < numsSize; j++) {
			if (nums[j] < nums[min])
				min = j;
		}
		if (min != i) {
			int temp = nums[min];
			nums[min] = nums[i];
			nums[i] = temp;
		}
	}
}

void MergeSort(int* nums, int numsSize) {
	int mid = numsSize / 2;
	int* arr = (int*)malloc(numsSize * sizeof(int));
	QuickSort(nums, 0, mid);
	QuickSort(nums, mid + 1, numsSize - 1);
	int left = 0, right = mid + 1, k = 0;
	while(left<=mid&&right<numsSize)
		arr[k++] = nums[left] > nums[right] ? nums[right++] : nums[left++];
	while (left <= mid)
		arr[k++] = nums[left++];
	while (right < numsSize)
		arr[k++] = nums[right++];
	for (int i = 0; i < numsSize; i++)
		nums[i] = arr[i];
	free(arr);
}

