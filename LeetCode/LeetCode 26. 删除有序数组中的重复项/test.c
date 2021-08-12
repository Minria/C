#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0)
        return 0;
    int slow = 1, fast = 1;
    while (fast < numsSize) {
        if (nums[fast] != nums[fast - 1]) {
            nums[slow] = nums[fast];
            slow++;
        }
        fast++;
    }
    return slow;
}
int main() {
    int nums[10] = { 1,1,2,2,4,5,6,7,8,9 };
    int ret = removeDuplicates(nums, 10);
    printf("%d", ret);
    return 0;
}