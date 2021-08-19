#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<malloc.h>
//void insert(int* nums, int numsSize) {
//	int i = 0;
//	int temp = 0;
//	for (i = 1; i < numsSize; ++i) {
//		if (nums[i] >= nums[i - 1])
//			continue;
//		temp = nums[i];
//		int j = 0;
//		for (j = i-1; j >= 0 && nums[j] > temp; --j)
//			nums[j+1] = nums[j];
//		nums[j+1] = temp;
//	}
//}

//void insert(int* nums, int numsSize) {
//	for (int i = 1; i < numsSize; ++i) {
//		int left = 0, right = i- 1;
//		while (left < right) {
//			int mid = (left + right) / 2;
//			if (nums[mid] > nums[i])
//				right = mid - 1;
//			if (nums[mid] > nums[i])
//				left = mid + 1;
//		}
//	}
//}
//
//int main() {
//	int nums[] = { 1,3,2,5,4,7,6 };
//	int numsSize = 7;
//	insert(nums, numsSize);
//	for (int i = 0; i < 7; ++i)
//		printf("%d ", nums[i]);
//	return 0;
//}

//int main() {
//	unsigned char a = 0xA5;
//	unsigned char b = ~a >> 4 + 1;
//	printf("%d\n", b);
//	return 0;
//}


//int main() {
//	const int i = 0;
//	int* j = (int*)&i;
//	*j = 1;
//	printf("%d %d", i, *j);
//	return 0;
//
//}

//int main() {
//	int arr[10] = { 0 };
//	arr[0] = 2 * 5;
//
//	arr[2] = 2;
//	arr[1] = arr[2] * arr[0];
//	return 0;
//}

//int fun(int x, int y) {
//	return (x & y) + ((x ^ y) >> 1);
//}
//int main() {
//	int ret = fun(2, 4);
//	printf("%d", ret);
//	return 0;
//}
//#define ma(x,y) (x*y)
//int main() {
//	int i = 5;
//	printf("%d", ma(i, i + 1) - 7);
//	return 0;
//}
