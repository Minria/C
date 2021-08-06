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
	Nums* p1 = NULL, * p2 = head;
	while (p2 && p2->next)
		p2 = p2->next;
	while (1) {
		p1=(Nums*)malloc(sizeof(Nums));
		printf("Input：");
		scanf("%d", &p1->data);
		if (p1->data == 0) {
			free(p1);
			break;
		}
		if (head == NULL) {
			head = p1;
			p2 = head;
		}
		else {
			p2->next = p1;
			p2 = p1;
		}
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
void ListChange(Nums* head) {
	Nums* p = head;
	printf("输入要被修改的数值：");
	int n = 0;
	int count = 0;
	scanf("%d", &n);
	while (p) {
		if (p->data == n) {
			count = 1;
			break;
		}
		p = p->next;
	}
	if (count == 0)
		printf("没有这个数值\n");
	else {
		printf("修改后的数值：");
		scanf("%d", &p->data);
	}
}
void menu() {
	printf("0.退出\n");
	printf("1.添加\n");
	printf("2.删除\n");
	printf("3.打印\n");
	printf("4.表长\n");
	printf("5.修改\n");
}
