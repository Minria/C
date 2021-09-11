#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
//int number(int n) {
//    int count = 0;
//    while (n) {
//        if ((n & 1) == 1 && count == 1) {
//            return 1;
//        }
//        if ((n & 1) == 1) {
//            count = 1;
//        }
//        else {
//            count = 0;
//        }
//        n = n >> 1;
//    }
//    return 0;
//}
//int findIntegers(int n) {
//    if (number(n) == 0) {
//        return n;
//    }
//}

//int findIntegers(int n) {
//    int m = 0;
//    int number = 1;
//    for (int i = 1; i <= n; ++i) {
//        m = i;
//        int flag = 0;
//        int count = 0;
//        while (m) {
//            if ((m & 1) == 1 && count == 1) {
//                flag = 1;
//                break;
//            }
//            if ((m & 1) == 1) {
//                count = 1;
//            }
//            else {
//                count = 0;
//            }
//            m = m >> 1;
//        }
//        if (flag == 0) {
//            ++number;
//        }
//    }
//    return number;
//}
//int main() {
//    int n = 10000;
//    printf("%d", findIntegers(n));
//    return 0;
//}

//void quickSort(int* nums, int left, int right) {
//    if (left >= right) {
//        return;
//    }
//    int i = left, j = right;
//    int temp = nums[left];
//    while (i < j) {
//        while (i < j && nums[j] >= temp)
//            --j;
//        nums[i] = nums[j];
//        while (i < j && nums[i] <= temp)
//            ++i;
//        nums[j] = nums[i];
//    }
//    nums[i] = temp;
//    quickSort(nums, left, i);
//    quickSort(nums, i + 1, right);
//}
//void findRepeatNumber(int* nums, int numsSize) {
//    quickSort(nums, 0, numsSize - 1);
//    int i = 0, j = 1;
//    int count = -1;
//    while (j < numsSize) {
//        if (nums[i] == nums[j]) {
//            if (count != nums[i]) {
//                printf("%d ",nums[i]);
//                count = nums[i];
//            }
//        }
//        ++i;
//        ++j;
//    }
//}
//int main() {
//    int nums[10] = { 2,3,5,5,2,7,8,9,4,6 };
//    findRepeatNumber(nums, 10);
//    return 0;
//}
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
	int len = nums1Size + nums2Size;
	int p1 = 0, p2 = 0;
	int left = 0, right = 0;
	int i = 0;
	for (i = 0; i < len / 2; ++i) {
		left = right;
		if (p1 < nums1Size && (p2 > nums2Size || nums1[p1] < nums2[p2])) {
			right = nums1[p1++];
		}
		else
			right = nums2[p2++];
	}
	if (len % 2 == 0)
		return (left + right) / 2;
	else
		return right;
}