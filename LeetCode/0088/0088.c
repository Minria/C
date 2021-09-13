#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int p1 = m - 1;
    int p2 = nums2Size - 1;
    int p3 = m + n - 1;
    while (p1 >= 0 && p2 >= 0) {
        nums1[p3--] = nums1[p1] > nums2[p2] ? nums1[p1--] : nums2[p2--];
    }
    while (p1 >= 0) {
        nums1[p3--] = nums1[p1--];
    }
    while (p2 >= 0) {
        nums1[p3--] = nums2[p2--];
    }
}
int main() {
    int nums1[10] = { 1,2,3,4,5 };
    int nums2[5] = { 6,7,8,9,10 };
    int num1Size = 10, nums2Size = 5;
    int m = 5, n = 5;
    merge(nums1, num1Size, m, nums2, nums2Size, n);
    return 0;

}