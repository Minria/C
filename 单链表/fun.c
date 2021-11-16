#include"head.h"

LNode* addHead(LNode* head) {
	LNode* p = (LNode*)malloc(sizeof(LNode));
	printf("输入数值>>");
	scanf("%d", &(p->val));
	p->next = head;
	head = p;
	return head;
}
LNode* addLast(LNode* head) {
	LNode* p = (LNode*)malloc(sizeof(LNode));
	printf("输入数值>>");
	scanf("%d", &(p->val));
	if (head == NULL) {
		head = p;
	}
	else {
		LNode* cur = head;
		while (cur->next != NULL) {
			cur = cur->next;
		}
		cur->next = p;
		p->next = NULL;
	}
	return head;
}
void printfList(LNode* head) {
	LNode* cur = head;
	while (cur != NULL) {
		printf("%d ", cur->val);
		cur = cur->next;
	}
}