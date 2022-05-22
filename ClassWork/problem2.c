#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
#include <Windows.h>


typedef struct ListNode {
	int val;
	struct ListNode* next;
}ListNode;


// 按照顺序打印链表
void print(ListNode* head) {
	ListNode* tmp = head->next;
	while (tmp) {
		printf("%d ", tmp->val);
		tmp = tmp->next;
	}
	printf("\n");
}

void difference(ListNode* head1, ListNode* head2) {
	ListNode* p1 = head1->next;
	ListNode* pre = head1;
	while (p1) {
		ListNode* p2 = head2->next;
		while (p2 && p2->val != p1->val) {
			p2 = p2->next;
		}
		if (p2 != NULL) {
			pre->next = p1->next;
			free(p1);
			p1 = pre->next;
		}
		else {
			pre = pre->next;
			p1 = pre->next;
		}
	}
}
int main() {
	// 为了方便运算，头节点不赋值
	ListNode* head1 = (ListNode*)malloc(sizeof(ListNode));
	ListNode* head2 = (ListNode*)malloc(sizeof(ListNode));
	ListNode* tmp;
	int n = 5;
	int m = 6;
	tmp = head1;
	printf("输入%d个数字\n", n);
	for (int i = 0; i < n; i++) {
		tmp->next = (ListNode*)malloc(sizeof(ListNode));
		tmp = tmp->next;
		tmp->next = NULL;
		scanf("%d", &tmp->val);
	}
	tmp = head2;
	printf("输入%d个数字\n", m);
	for (int i = 0; i < m; i++) {
		tmp->next = (ListNode*)malloc(sizeof(ListNode));
		tmp = tmp->next;
		tmp->next = NULL;
		scanf("%d", &tmp->val);
	}
	difference(head1, head2);
	print(head1);
	return 0;
}