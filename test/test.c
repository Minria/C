#include<stdio.h>


typedef struct ListNode {
	int val;
	struct ListNode* next;
}ListNode;
int main() {
	//int arr[10] = { 1,2,3,4,5,6,7,8 };
	//int* p = arr;
	//printf("%d\n", *p++);
	//printf("%d\n", *p);
	int ret = sizeof(ListNode);
	printf("%d", ret);
}