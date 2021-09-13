#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

int removeDuplicates(int* nums, int numsSize) {
    int slow = 1, fast = 1;
    int count = 0;
    for (fast = 1; fast < numsSize; ++fast) {
        if (nums[fast] != nums[fast - 1]) {
            nums[slow++] = nums[fast];
            count = 0;
        }
        else if (nums[fast] == nums[fast - 1] && count == 0) {
            count = 1;
            nums[slow++] = nums[fast];
        }
        else {

        }
    }
    return slow;
}
int main() {
    return 0;
}