#include"head.h"


void insertSort(int* nums, int numsSize) {
	for (int i = 0; i < numsSize; i++) {
		if (nums[i] < nums[i - 1]) {
			for (int j = i; j>=1&&nums[j] < nums[j - 1]; j--) {
				int tmp = nums[j];
				nums[j] = nums[j - 1];
				nums[j - 1] = tmp;
			}
		}
	}
}