#include"test.h"



LNode* InitList(LNode* head) {
	if (head != NULL)
		return head;
	head = (LNode*)malloc(sizeof(LNode));
	printf("输入数据>");
	scanf("%d", &(head->data));
	head->next = NULL;
	return head;
}
LNode* headInsert(LNode* head) {
	LNode* p1;
	p1 = (LNode*)malloc(sizeof(LNode));
	printf("输入数据>");
	scanf("%d", &(p1->data));
	p1->next = head;
	head = p1;
	return head;
}
LNode* tailInsert(LNode* head) {
	LNode* p1 = head, * p2;
	while (p1->next) {
		p1 = p1->next;
	}
	p2 = (LNode*)malloc(sizeof(LNode));
	printf("输入数据>");
	scanf("%d", &(p2->data));
	p1->next = p2;
	p2->next = NULL;
	return head;
}
void ListPrintf(LNode* head) {
	if (head == NULL)
		printf("empty");
	while (head) {
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}