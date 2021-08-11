#define _CRT_SECURE_NO_WARNINGS
int findRepeatNumber(int* nums, int numsSize) {
    int book[numsSize] = { 0 };
    int i = 0, j = 0;
    for (i = 0; i < numsSize; i++) {
        if (book[nums[i] == 1]) {
            nums[j] = nums[i];
            j++;
        }
        book[nums[i]]++;
    }
    return j - 1;
}
int main() {

}