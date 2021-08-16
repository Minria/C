#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<malloc.h>

//int main() {
// 
//	int b=++(a++);
//	printf("%d", a);
//	return 0;
//}

//int f(int a) {
//	int b = 0;
//	static int c = 3;
//	a = ++c, ++b;
//	return a;
//}
//int main() {
//	int a = 2, i = 0, k = 0;
//	for (i = 0; i < 2; i++)
//		k = f(a++);
//	printf("%d", k);
//	return 0;
//}

//int x = 3;
//void inc() {
//	static int x = 1;
//	x *= (x + 1);
//	printf("%d\n", x);
//	return;
//}
//int main() {
//	int i = 1;
//	for (i = 0; i < x; i++)
//		inc();
//	return 0;
//}
// 
// 
//void PreOrder(BiTree T) {
//	if (T) {
//		visit(T);
//		PreOrder(T->lchild);
//		PreOrder(T->rchild);
//	}
//}
//
//void InOrder(BiTree T) {
//	if (T) {
//		Inorder(T->lchild);
//		Visit(T);
//		Inorder(T->rchild);
//	}
//}
//void PostOrder(BiTree T) {
//	if (T) {
//		PostOrder(T->lchild);
//		PostOrder(T->rchild);
//		visit(T);
//	}
//}

//void InOrder(BiTree T) {
//	InitStack(S);
//	BiTree p = T;
//	while (p || !IsEmpty(S)) {
//		if (p) {
//			Push(S, p);
//			p->lchild;
//		}
//		else {
//			Pop(S, p);
//			visit(p);
//			p->rchild;
//		}
//	}
//}

//void PreOrder(BiTree T) {
//	InitStack(S);
//	BiTree p = T;
//	while (p || !IsEmpty(S)) {
//		if (p) {
//			visit(p);
//			Push(S, p);
//			p->lchild;
//		}
//		else {
//			Pop(S, p);
//			p->rchild;
//		}
//	}
//}


//int main() {
//	int m = 0, n = 0;
//	for (m = 0, n = -1; n == 0; m++, n++)
//		n++;
//	return 0;
//}
void QuickSort(int* nums, int left, int right) {
	if (left >=right)
		return;
	int temp = nums[left];
	int i = left, j = right;
	while (i < j) {
		while (i <= j && nums[j] >= temp)
			--j;
		nums[i] = nums[j];
		while (i <= j && nums[i] <= temp)
			++i;
		nums[j] = nums[i];
	}
	nums[i] = temp;
	QuickSort(nums, left, i);
	QuickSort(nums, i + 1, right);
}
// 
// 
//void quick_sort(int* nums, int l, int r) {
//if (l + 1 >= r) {
//	return;
//}
//int first = l, last = r - 1, key = nums[first];
//while (first < last) {
//	while (first < last && nums[last] >= key) {
//		--last;
//	}
//	nums[first] = nums[last];
//	while (first < last && nums[first] <= key) {
//		++first;
//	}
//	nums[last] = nums[first];
//}
//nums[first] = key;
//quick_sort(nums, l, first);
//quick_sort(nums, first + 1, r);
//}
//int* MinFirstK(int* nums, int numsSize,int k) {
//	int* arr = (int*)malloc(k * sizeof(int));
//	QuickSort(nums, 0, numsSize-1);
//	for (int i = 0; i < k; ++i)
//		arr[i] = nums[i];
//	return arr;
//}

int main() {
	int nums[] = { 1,2,3,4,6,7,9,5 };
	int size = sizeof(nums) / sizeof(nums[0]);
	int k = 5;
	QuickSort(nums,0,size);
	//int *arr = MinFirstK(nums,size,5);
	for (int i = 0; i < k; ++i)
		printf("%d ", nums[i]);
	return 0;
}