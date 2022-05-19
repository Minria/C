#include<stdio.h>


void swap(int* nums, int i, int j) {
	int tmp = nums[i];
	nums[i] = nums[j];
	nums[j] = tmp;
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
//int main() {
//    int nums[] = { 1,5,3,9,0,5,4,2,4,78,11 };
//    int numsSize = sizeof(nums) / 4;
//    shellSort(nums, numsSize);
//    for (int i = 0; i < numsSize; i++) {
//        printf("%d ", nums[i]);
//    }
//}