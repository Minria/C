#include"head.h"


void insertSort(int* nums, int numsSize) {
	for (int i = 1; i < numsSize; i++) {
		if (nums[i] < nums[i - 1]) {
			for (int j = i; j>=1&&nums[j] < nums[j - 1]; j--) {
				int tmp = nums[j];
				nums[j] = nums[j - 1];
				nums[j - 1] = tmp;
			}
		}
	}
}
void halfInsertSort(int* nums, int numsSize) {
	for (int i = 1; i < numsSize; i++) {
		if (nums[i] < nums[i - 1]) {
			int tmp = nums[i];
			int left = 0, right = i-1;
			while (left <= right) {
				int mid = (left + right) / 2;
				if (tmp <= nums[mid]) {
					right = mid - 1;
				}
				else {
					left = mid + 1;
				}
			}
			for (int j = i; j >= left + 1; j--) {
				nums[j] = nums[j - 1];
			}

			nums[left] = tmp;
		}
	}
}

void selectSort(int* nums, int numsSize) {
	for (int i = 0; i < numsSize; i++) {
		int min = nums[i];
		int flag = i;
		for (int j = i + 1; j < numsSize; j++) {
			if (nums[j] < min) {
				min = nums[j];
				flag = j;
			}
		}
		if (flag != i) {
			int tmp = nums[i];
			nums[i] = nums[flag];
			nums[flag] = tmp;
		}
	}
}
void bubbleSort(int* nums, int numsSize) {
	for (int i = 0; i < numsSize; i++) {
		bool flag = false;
		for (int j = numsSize - 1; j > i; j--) {
			if (nums[j] < nums[j - 1]) {
				int tmp = nums[j];
				nums[j] = nums[j - 1];
				nums[j - 1] = tmp;
				flag = true;
			}
		}
		if (flag == false) {
			break;
		}
	}
}
void quickSort(int* nums, int left, int right) {
	if (left >= right) return;
	int i = left, j = right;
	int tmp = nums[i];
	while (i < j) {
		while (i < j && nums[j] >= tmp) {
			j--;
		}
		nums[i] = nums[j];
		while (i < j && nums[i] <= tmp) {
			++i;
		}
		nums[j] = nums[i];
	}
	nums[i] = tmp;
	quickSort(nums, left, i);
	quickSort(nums, i + 1, right);
}
void heapSort(int* nums, int numsSize) {
	for (int i = numsSize / 2 - 1; i >= 0; i--) {
		adjustHeap(nums, i, numsSize);
	}
	for (int j = numsSize - 1; j > 0; j--) {
		int tmp = nums[0];
		nums[0] = nums[j];
		nums[j] = tmp;
		adjustHeap(nums, 0, j);
	}
}
void adjustHeap(int* nums, int i, int numsSize) {
	int temp = nums[i];
	for (int k = i * 2 + 1; k < numsSize; k = k * 2 + 1) {
		if (k + 1 < numsSize && nums[k] < nums[k + 1]) {
			k++;
		}
		if (nums[k] > temp) {
			nums[i] = nums[k];
			i = k;
		}
		else {
			break;
		}
	}
	nums[i] = temp;
}