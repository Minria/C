#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<malloc.h>

//int* find(int* nums, int m, int n, int key) {//m行n列，找到返回1，否则返回0
//	if (nums == NULL || m < 1 || n < 1)
//		return 0;
//	int row = 0;
//	int col = n - 1;
//	while (row <= m - 1 && col >= 0) {
//		if (nums[row * n + col] == key)
//			return 1;
//		else if (nums[row * n + col] > key)
//			--col;
//		else
//			++row;
//	}
//	return 0;
//}
//int main() {
//	int nums[][4] = { 1,2,3 ,4 ,2 ,3 ,4, 5, 3, 4, 5, 6, 4, 5, 6, 7, };
//	int key = 7;
//	printf("%d", find(nums, 4, 4, key));
//	return 0;
//
//}

//BiTree root = NULL;//定义一颗空树
//
//root = (BiTree)malloc(sizeof(BiTNode));//开辟根结点
//root->data = { 1 };
//root->lchild = NULL;
//root->rchild = NULL;
//
//BiTree* p = (BiTree)malloc(sizeof(BiTNode));//开辟第二个结点
//p->data = { 2 };
//p->lchild = NULL;
//p->rchild = NULL;
//root->lchild = p;
