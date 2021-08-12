#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
//int min(int x, int y) {
//    return x < y ? x : y;
//}
//void merge_sort(int arr[], int len) {
//    int* a = arr;//指向首元素
//    int* b = (int*)malloc(len * sizeof(int));//开辟空间
//    int seg=0, start=0;
//    for (seg = 1; seg < len; seg += seg) {
//        for (start = 0; start < len; start += seg * 2) {
//            int low = start, mid = min(start + seg, len), high = min(start + seg * 2, len);
//            int k = low;
//            int start1 = low, end1 = mid;
//            int start2 = mid, end2 = high;
//            while (start1 < end1 && start2 < end2)
//                b[k++] = a[start1] < a[start2] ? a[start1++] : a[start2++];
//            while (start1 < end1)
//                b[k++] = a[start1++];
//            while (start2 < end2)
//                b[k++] = a[start2++];
//        }
//        int* temp = a;
//        a = b;
//        b = temp;
//    }
//    if (a != arr) {
//        int i;
//        for (i = 0; i < len; i++)
//            b[i] = a[i];
//        b = a;
//    }
//    free(b);
//}
//int main() {
//    int arr[] = { 23,446,1,334,234,65456,232,40,9,325453,213535 };
//    int len = sizeof(arr) / sizeof(arr[0]);
//    merge_sort(arr, len);
//    for (int i = 0; i < len; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}




