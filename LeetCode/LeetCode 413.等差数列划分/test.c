#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int numberOfArithmeticSlices(int* nums, int numsSize) {
	if (numsSize <= 2)
		return 0;
	int d = nums[1] - nums[0];
	int count = 0, sum = 0;
	int i = 0;
	for (i = 2; i < numsSize; i++) {
		if (nums[i] - nums[i - 1] == d) {
			count++;
		}
		else {
			d = nums[i] - nums[i - 1];
			count = 0;
		}
		sum = sum + count;
	}
	return sum;
}



int main() {
	int nums[] = { 1,2,3,4,5,6,7 };
	printf("%d", numberOfArithmeticSlices(nums, 7));
	return 0;
}