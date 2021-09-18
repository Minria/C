#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>


int search(int* nums, int numsSize, int target) {
    if (target == nums[0]) {
        return 0;
    }
    else if (target > nums[0]) {
        int count = -10001;
        int i = 0;
        while (count < nums[i]) {
            count = nums[i];
            if (target == nums[i]) {
                return i;
            }
            ++i;
        }
    }
    else {
        if (nums[0] <= nums[numsSize - 1]) {
            return -1;
        }
        int count = 10001;
        int i = numsSize - 1;
        while (count > nums[i]) {
            count = nums[i];
            if (nums[i] == target) {
                return i;
            }
            --i;
        }
    }
    return -1;
}

int main() {
    int arr[] = { 1,3 };
    int arrSize = sizeof(arr) / 4;
    int target = 2;
    printf("%d", search(arr, arrSize, target));
    return 0;
}