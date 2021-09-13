#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int left = 0, right = numbersSize - 1;
    int* answer = (int*)malloc(2 * sizeof(int));
    while (left < right) {
        if (target == numbers[left] + numbers[right]) {
            answer[0] = left + 1;
            answer[1] = right + 1;
            *returnSize = 2;
            return answer;
        }
        else if (target > numbers[left] + numbers[right]) {
            ++left;
        }
        else {
            --right;
        }
    }
}
int main() {
    int nums[] = { 1,2,3,4,5,6 };
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 5;
    int returnSize = 0;
    int* ret = twoSum(nums, numsSize, target, &returnSize);
    printf("%d %d", ret[0], ret[1]);
    return 0;
}