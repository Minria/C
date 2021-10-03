#include"test.h"

//typedef struct LNode {
//	ElemType data;//数据域
//	struct LNode* next;//指针域
//}LNode;


//typedef struct LNode {
//	 int data;//数据域
//	struct LNode* next;//指针域
//}LNode;
//struct LNode* ListInsertTail(struct Node* head) {
//	LNode* p1 = head, * p2;
//	p2 = (LNode*)malloc(sizeof(LNode));
//	p2->next = head;
//	head = p2;
//	return head;
//}

//struct LNode* ListInsertHead(LNode* head) {
//	LNode* p1 = head, * p2;
//	while (p1->next) {
//		p1 = p1->next;
//	}
//	p2 = (LNode*)malloc(sizeof(LNode));
//	p1->next = p2;
//	p1->next = NULL;
//	return head;
//}


void menu() {
	printf("1.尾插法\n");
	printf("2.头插法\n");
	printf("3.打印\n");
}
int main() {
	struct LNode* head = NULL;
	int input=0;
	while (1) {
		menu();
		printf("选择>");
		scanf("%d", &input);
		switch (input){
		case 1:
			if (head == NULL)
				head=InitList(head);
			else
				head=tailInsert(head);
			break;
		case 2:
			if (head == NULL)
				head=InitList(head);
			else
				head=headInsert(head);
			break;
		case 3:
			ListPrintf(head);
			break;
		default:
			break;
		}
	}
	return 0;
}