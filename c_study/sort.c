
#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>


void swap(int* nums, int i, int j) {
	int tmp = nums[i];
	nums[i] = nums[j];
	nums[j] = tmp;
}
void insertSort(int* nums, int numsSize) {
	for (int i = 1; i < numsSize; i++) {
		if (nums[i] < nums[i - 1]) {
			int tmp = nums[i];
			int j = i - 1;
			for (; j >= 0 && nums[j] > tmp; j--) {
				nums[j + 1] = nums[j];
			}
			nums[j + 1] = tmp;
		}
	}
}

void halfInsertSort(int* nums, int numsSize) {
	for (int i = 1; i < numsSize; i++) {

		if (nums[i] < nums[i - 1]) {
			int tmp = nums[i];
			int left = 0, right = i - 1;
			while (left < right) {
				int mid = (left + right) / 2;
				if (nums[mid] < tmp) {
					left = mid + 1;
				}
				else {
					right = mid - 1;
				}
			}
			for (int j = i; j > left; j--) {
				nums[j] = nums[j - 1];
			}
			nums[left] = tmp;
		}
	}
}
void shellSort(int* nums, int numsSize) {

	for (int gap = numsSize / 2; gap >= 1; gap /= 2) {

		for (int i = gap; i < numsSize; i++) {
			if (nums[i] < nums[i - gap]) {
				int tmp = nums[i];
				int j = i - gap;
				for (; j >= 0 && nums[j] > tmp; j -= gap) {
					nums[j + gap] = nums[j];
				}
				nums[j + gap] = tmp;
			}
		}
	}
}
void bubbleSort(int* nums, int numsSize) {
	for (int i = 0; i < numsSize; i++) {
		bool flag = false;
		for (int j = numsSize - 1; j > i; j--) {
			if (nums[j] < nums[j - 1]) {
				swap(nums, j - 1, j);
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
	quickSort(nums, left, i - 1);
	quickSort(nums, i + 1, right);
}

void selectSort(int* nums, int numsSize) {
	for (int i = 0; i < numsSize; i++) {

		int min = i;
		for (int j = i + 1; j < numsSize; j++) {
			if (nums[j] < nums[min]) {
				min = j;
			}
		}
		if (min != i) {
			swap(nums, min, i);
		}
	}
}

void heapSort(int* nums, int numSize) {
	for (int i = numSize / 2 - 1; i >= 0; i--) {
		adjustDown(nums, i, numSize);
	}
	int end = numSize - 1;
	while (end > 0) {
		swap(nums, 0, end);
		adjustDown(nums, 0, end);
		end--;
	}
}
void adjustDown(int* nums, int root, int numsSize) {
	int parent = root;
	int child = 2 * root + 1;
	while (child < numsSize) {
		if (child + 1 < numsSize && nums[child] < nums[child + 1]) {
			child++;
		}
		if (nums[parent] < nums[child]) {
			swap(nums, parent, child);
			parent = child;
			child = 2 * parent + 1;
		}
		else {
			break;
		}
	}
}
void mergeSort(int* nums, int numsSize) {
	mergeInterval(nums, 0, numsSize - 1);
}
void mergeInterval(int* nums, int left, int right) {
	if (left == right) return;
	int mid = (left + right) / 2;
	mergeInterval(nums, left, mid);
	mergeInterval(nums, mid + 1, right);
	mergeAnd(nums, left, right);

}
void mergeAnd(int* nums, int left, int right) {
	int s1 = left;
	int e1 = (left + right) / 2;
	int s2 = e1 + 1;
	int e2 = right;
	int* tmp = (int*)malloc((right - left + 1) * 4);
	int k = 0;
	while (s1 <= e1 && s2 <= e2) {
		tmp[k++] = nums[s1] <= nums[s2] ? nums[s1++] : nums[s2++];
	}
	while (s1 <= e1) {
		tmp[k++] = nums[s1++];
	}
	while (s2 <= e2) {
		tmp[k++] = nums[s2++];
	}
	for (int i = 0; i < right - left + 1; i++) {
		nums[i + left] = tmp[i];
	}

}