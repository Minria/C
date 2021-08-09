#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void quicksort(int* nums, int left, int right) {
	if (left > right)
		return;
	int temp = *(nums + left);
	int i = left, j = right;
	int key = 0;
	while (i < j) {
		while (i < j && *(nums + j) >= temp) {
			j--;
		}
		while (i < j && *(nums + i)<=temp) {
			i++;
		}
		if (i < j) {
			key = *(nums + i);
			*(nums + i) = *(nums + j);
			*(nums + j) = key;
		}
	}
	*(nums + left) = *(nums+i);
	*(nums + i) = temp;
	quicksort(nums, left, i-1);
	quicksort(nums, i+1 , right);
}
void reverse(int *nums, int numsSize) {
	int left = 0, right = numsSize - 1;
	int temp=0;
	while (left < right) {
		if(*(nums + left) % 2 != 0) {
			left++;
			continue;
		}
		if (*(nums + right) % 2 == 0) {
			right--;
			continue;
		}//一个指针指向头，一个指向尾，前面为奇数跳过，后面为偶数跳过
		temp = *(nums + right);
		*(nums + right) = *(nums + left);
		*(nums + left) = temp;
		left++;
		right--;
	}
	quicksort(nums, 0, left - 1);
	quicksort(nums, left, numsSize - 1);
}
int main() {
	int n = 0, i = 0;
	int nums[20] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &nums[i]);
	reverse(nums, n);
	for (i = 0; i < n; i++)
		printf("%d ", nums[i]);
	return 0;

}
