#include"head.h"


void menu() {
	printf("*******1.头插法*********\n");
	printf("*******2.尾插法*********\n");
	printf("*******3.打印插法*******\n");
}
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
	if (head == NULL) {
		printf("空链表");
		return;
	}
	LNode* cur = head;
	while (cur != NULL) {
		printf("%d ", cur->val);
		cur = cur->next;
	}
	printf("\n");
}
void del(LNode* head, int val) {
	LNode* dummy = (LNode*)malloc(sizeof(LNode));
	dummy->next = head;
	LNode* ptr = dummy;
	bool flag = false;
	while (ptr->next!=NULL) {
		if (ptr->next->val == val) {
			LNode* p = ptr->next;
			ptr->next = ptr->next->next;
			free(p);
			flag = true;
		}
		ptr = ptr->next;
	}
	if (flag == false) {
		printf("元素不存在");
	}
	free(dummy);
	return head;
}