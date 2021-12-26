#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>
void insertSort(int* nums, int numsSize);
void swap(int* nums, int i, int j);
void halfInsertSort(int* nums, int numsSize);
void shellSort(int* nums, int numsSize);
void bubbleSort(int* nums, int numsSize);
void quickSort(int* nums, int left, int right);
void selectSort(int* nums, int numsSize);
void heapSort(int* nums, int numSize);
void adjustDown(int* nums, int root, int numsSize);
void mergeAnd(int* nums, int left, int right);
void mergeInterval(int* nums, int left, int right);
void mergeSort(int* nums, int numsSize);