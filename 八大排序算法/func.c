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
			while (left < right) {
				int mid = (left + right) / 2;
				if (tmp < nums[mid]) {
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

