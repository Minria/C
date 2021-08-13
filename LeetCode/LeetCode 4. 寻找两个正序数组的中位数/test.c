#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
//double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
//    int i = 0, j = 0, k = 0;
//    int* arr = (int*)malloc((nums1Size + nums2Size) * sizeof(int));
//    while (i < nums1Size && j < nums2Size) {
//        arr[k++] = nums1[i] > nums2[j] ? nums2[j++] : nums1[i++];
//    }
//    while (i < nums1Size) {
//        arr[k++] = nums1[i++];
//    }
//    while (j < nums2Size) {
//        arr[k++] = nums2[j++];
//    }
//    int temp = nums1Size + nums2Size;
//    if (temp % 2 != 0) {
//        return arr[temp / 2];
//    }
//    else {
//        return (arr[temp / 2] + arr[temp / 2 - 1]) * 1.0 / 2;
//    }
//}

int main() {
    int nums1[] = { 1,2 };
    int nums2[] = { 3,4 };
    int nums1Size = sizeof(nums1) / sizeof(nums1[0]);
    int nums2Size = sizeof(nums2) / sizeof(nums2[0]);
    printf("%f", findMedianSortedArrays(nums1, nums1Size, nums2, nums2Size));
    return 0;
}