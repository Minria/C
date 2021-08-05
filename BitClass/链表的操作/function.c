#define _CRT_SECURE_NO_WARNINGS
#include"main.h"
int ListLength(Nums* head) {
	int count = 0;
	Nums* p=head;
	while (p) {
		count++;
		p=p->next;
	}
	return count;
}
void* ListCreat(Nums* head) {
	head = NULL;
	return head;
}
void* ListInsert(Nums* head) {
	int count = ListCreat(head);
	printf("%d\n", count);
	Nums* p1 = NULL, * p2 = NULL;
	p1 = p2 = (Nums*)malloc(sizeof(Nums));
	if (count == 0) {
		head = p2;
	}
	else {
		p2 = head;
		while (p2->next) {
			p2 = p2->next;
		}
	}
	while (1) {
		printf("Input：");
		scanf("%d", &p1->data);
		if (p1->data == 0) {
			free(p1);
			break;
		}
		p2->next = p1;
		p2 = p1;
		p1 = (Nums*)malloc(sizeof(Nums));
	}p2->next = NULL;
	return head;
}
void* ListDel(Nums*head,int n) {
	if (head->data == n) {
		head = head->next;
	}
	else {
		Nums* p=head,*q=NULL;
		q = p->next;
		while (q) {
			if (q->data == n) {
				p->next = q->next;
				free(q);
				return head;
			}
			p = q;
			q = q->next;
		}
	}
	return head;
}
void ListPrint(Nums* head) {
	while (head) {
		printf("%d ", head->data);
		head = head->next;
	}
}
void menu() {
	printf("0.退出\n");
	printf("1.添加\n");
	printf("2.删除\n");
	printf("3.打印\n");
	printf("4.表长\n");
}
