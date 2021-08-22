#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<malloc.h>

//int main(int argc, char* argv[]) {
//	struct tagTest1 {
//		short a;
//		char d;
//		long b;
//		long c;
//	};
//	struct tagTest2 {
//		long b;
//		short c;
//		char d;
//		long a;
//	};
//	struct tagTest3 {
//		short c;
//		long b;
//		char d;
//		long a;
//	};
//	struct tagTest1 stT1;
//	struct tagTest2 stT2;
//	struct tagTest3 stT3;
//	printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//	return 0;
//}

//int fun(int x, int y) {
//	static int m = 0;
//	static int i = 2;
//	i += m + 1;
//	m = i + x + y;
//	return m;
//}
//void main() {
//	int j = 4;
//	int m = 1;
//	int k = 0;
//	k = fun(j, m);
//	printf("%d", k);
//	k = fun(j, m);
//	printf("%d", k);
//	return;
//
//}

//int main() {
//	unsigned int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num != 0) {
//		if (num % 2 == 1) {             //先取余
//			count++;
//		}
//		num = num / 2;                 //再取整
//	}
//	printf("%d", count);
//
//	return 0;
//}

//void quickSort(int* nums, int left, int right) {
//	if (left >= right)
//		return;
//	int i = left;
//	int j = right;
//	int pvo = nums[left];
//	while (i < j) {
//		while (i < j && nums[j] >= pvo)
//			--j;
//		nums[i] = nums[j];
//		while (i < j && nums[i] <= pvo)
//			++i;
//		nums[j] = nums[i];
//	}
//	nums[i] = pvo;
//	quickSort(nums, left, i);
//	quickSort(nums, i + 1, right);
//}
//int* selK(int* nums,int numsSize, int k) {
//	quickSort(nums, 0, numsSize-1);
//	int* arr = (int*)malloc(k * sizeof(int));
//	for (int i = 0; i < k; ++i)
//		arr[i] = nums[i];
//	return arr;
//}
//int main() {
//	int nums[] = { 9,8,7,6,5,4,3,2,1 };
//	int* arr = selK(nums, 9, 3);
//	printf("%d %d %d", arr[0], arr[1], arr[2]);
//	return 0;
//}