#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

void insertSort(int* nums, int numsSize);
void halfInsertSort(int* nums, int numsSize);
void selectSort(int* nums, int numsSize);
void bubbleSort(int* nums, int numsSize);
void quickSort(int* nums, int left, int right);