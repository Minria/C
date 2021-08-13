#define _CRT_SECURE_NO_WARNINGS
int removeElement(int* nums, int numsSize, int val) {
    int fast = 0, slow = 0;
    for (fast = 0; fast < numsSize; fast++) {
        if (nums[fast] != val)
            nums[slow++] = nums[fast];
    }
    return slow;
}
int removeElement(int* nums, int numsSize, int val) {
    int left = 0, right = numsSize - 1;
    while (left <= right) {
        if (nums[left] == val) {
            nums[left] = nums[right];
            right--;
        }
        else {
            left++;
        }
    }
    return left;
