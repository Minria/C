#include<stdio.h>
#include<malloc.h>

typedef struct ListNode {
	int val;
	int password;
	struct ListNode* next;
}ListNode;

ListNode* create_cricle() {
	ListNode* p1 = (ListNode*)malloc(sizeof(ListNode));
	ListNode* p2 = (ListNode*)malloc(sizeof(ListNode));
	ListNode* p3 = (ListNode*)malloc(sizeof(ListNode));
	ListNode* p4 = (ListNode*)malloc(sizeof(ListNode));
	ListNode* p5 = (ListNode*)malloc(sizeof(ListNode));
	ListNode* p6 = (ListNode*)malloc(sizeof(ListNode));
	ListNode* p7 = (ListNode*)malloc(sizeof(ListNode));
	p1->val = 1;
	p1->password = 3;
	p1->next = p2;
	p2->val = 2;
	p2->password = 8;
	p2->next = p3;
	p3->val = 3;
	p3->password = 1;
	p3->next = p4;
	p4->val = 4;
	p4->password = 22;
	p4->next = p5;
	p5->val = 5;
	p5->password = 4;
	p5->next = p6;
	p6->val = 6;
	p6->password = 9;
	p6->next = p7;
	p7->val = 7;
	p7->password = 15;
	p7->next = p1;
	return p1;
}
int main() {
	int cnt = 1;
	int password = 5;
	ListNode* p = create_cricle();
	ListNode* cur = p;
	while (cur->next != p) {
		cur = cur->next;
	}
	while (p->next != p) {
		if (cnt == password) {
			cur->next = p->next;
			printf("%d ", p->val);
			password = p->password;
			cnt = 1;
			p = cur->next;
		}
		else {
			cur = p;
			p = p->next;
			cnt++;
		}
	}
	return 0;
}