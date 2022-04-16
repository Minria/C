#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
#include <Windows.h>

/**
* Author is wangfuming
*/

//
//void swap(int* arr1, int* arr2) {
//	int* arr = arr1;
//	arr1 = arr2;
//	arr2 = arr;
//}
//int main() {
	//int arr[10] = { 1,2,3,4,5,6,7,8 };
	//int* p = arr;
	//printf("%d\n", *p++);
	//printf("%d\n", *p);
	//int ret = sizeof(ListNode);
	//printf("%d", ret);
//	int arr1[] = {1,2,3};
//	int arr2[] = {4,5,6};
//	swap(arr1, arr2);
//	for (int i = 0; i < 3; i++) {
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 3; i++) {
//		printf("%d ", arr2[i]);
//	}
//}







//typedef struct TreeNode {
//	int val;
//	struct TreeNode* left;
//	struct TreeNode* right;
//}TreeNode;
//
//
//
//int main() {
//	TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
//	node->val = 0;
//	node->left = NULL;
//	node->right = NULL;
//	printf(node->val);
//}

//void getNode(TreeNode node) {
//	node.val = 1;
//}


//int main() {
//	int arr[] = {23,34,1,4,32,45};
//	int n = sizeof(arr) / 4;
//	int ret = getMin(arr,n);
//	printf("%d", ret);
//}
//int getMin(int* arr, int n) {
//	int count = 0;
//	int min = 1;
//	int h = 1;
//	while (1) {
//		for (int i = 0; i < n; i++) {
//			if (min == arr[i]) {
//				min++;
//			}
//			count++;
//		}
//		if (h == min) break;
//		h = min;
//	}
//	printf("ʱ�䣺%d\n", count);
//	return min;
//}

//int main() {
//	int a = 1, b = 2, m = 0, n = 0, k;
//	k = (n = b > a) || (m = a < b);
//	//k = (m = a < b) || (n = b > a);
//	printf("%d %d %d", k, m, n);
//
//}




