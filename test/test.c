#include<stdio.h>
#include<malloc.h>

typedef struct ListNode {
	int val;
	struct ListNode* next;
}ListNode;
void swap(int* arr1, int* arr2) {
	int* arr = arr1;
	arr1 = arr2;
	arr2 = arr;
}
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


//int* megerSort(int* nums1, int numsSize1, int* nums2, int numsSize2) {
//	int i = 0;
//	int j = 0;
//	int l = 0;
//	int* ans = (int*)malloc(4 * (numsSize1 + numsSize2));
//	while (i < numsSize1 && j < numsSize2) {
//		ans[l++] = nums1[i] > nums2[j] ? nums2[j++] : nums1[i++];
//	}
//	while (i < numsSize1) {
//		ans[l++] = nums1[i++];
//	}
//	while (j < numsSize2) {
//		ans[l++] = nums2[j++];
//	}
//	return ans;
//}
//int main() {
//	int nums1[] = { 1,2,3,4,5 };
//	int nums1Size = sizeof(nums1) / 4;
//	int nums2[] = { 2,2,4,5,8,9 };
//	int nums2Size = sizeof(nums2) / 4;
//	int* ret = megerSort(nums1, nums1Size, nums2, nums2Size);
//	for (int i = 0; i < nums1Size + nums2Size; i++) {
//		printf("%d ", ret[i]);
//	}
//	printf("\n");
//	free(ret);
//	return 0;
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


int main() {
	int arr[] = {23,34,1,4,32,45};
	int n = sizeof(arr) / 4;
	int ret = getMin(arr,n);
	printf("%d", ret);
}
int getMin(int* arr, int n) {
	int count = 0;
	int min = 1;
	int h = 1;
	while (1) {
		for (int i = 0; i < n; i++) {
			if (min == arr[i]) {
				min++;
			}
			count++;
		}
		if (h == min) break;
		h = min;
	}
	printf("ʱ�䣺%d\n", count);
	return min;
}