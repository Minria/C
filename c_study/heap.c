#include<stdio.h>
void swap(int* nums, int i, int j) {
    int tmp = nums[i];
    nums[i] = nums[j];
    nums[j] = tmp;
}
//���µ�����һ�����ڽ���
void adjustDown(int* nums, int numsSize, int k) {
    int parent = k;
    int child = 2 * k + 1;
    while (child < numsSize) {
        if (child + 1 < numsSize && nums[child] < nums[child + 1]) {
            child++;
        }
        if (nums[parent] < nums[child]) {
            swap(nums, parent, child);
            parent = child;
            child = 2 * parent + 1;
        }
        else {
            break;
        }
    }
}
//���ϵ�����һ�����ڳ��ӻ������
void adjustUp(int* nums, int child) {
    while (child > 0) {
        int parent = (child - 1) / 2;
        if (nums[child] > nums[parent]) {
            swap(nums, child, parent);
            child = parent;
        }
        else {
            break;
        }
    }
}

//int main() {
//    int nums[] = { 2,4,5,7,9,1,5,3,8,10,15,14,19 };
//    int numsSize = sizeof(nums) / 4;
//    for (int i = numsSize / 2 - 1; i >= 0; i--) {
//        adjustDown(nums, numsSize, i);
//    }
//    for (int i = 0; i < numsSize; i++) {
//        printf("%d ", nums[i]);
//    }
//    printf("\n");
//    //����
//    int end = numsSize - 1;
//    while (end > 0) {
//        swap(nums, 0, end);
//        adjustDown(nums, end, 0);
//        end--;
//    }
//    for (int i = 0; i < numsSize; i++) {
//        printf("%d ", nums[i]);
//    }
//}