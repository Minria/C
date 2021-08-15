#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct ListNode {
    int val;
    struct ListNode* next;
};

//struct ListNode* swapPairs(struct ListNode* head) {
//	struct ListNode* p1 = head, * p2 = NULL, * p3 = NULL, * p4 = NULL;
//	while (p1 && p1->next) {
//		p2 = p1->next;
//		p3 = p2->next;
//		p1->next = p3;
//		p2->next = p1;
//		if (p4 == NULL) {
//			head = p2;
//		}
//		else {
//			p4->next = p2;
//		}
//		p4 = p1;
//		p1 = p3;
//	}
//	return head;
//}
struct ListNode* swapPairs(struct ListNode* head) {
	struct ListNode dummyHead;
	dummyHead.next = head;
	struct ListNode* temp = &dummyHead;
	while (temp->next != NULL && temp->next->next != NULL) {
		struct ListNode* node1 = temp->next;
		struct ListNode* node2 = temp->next->next;
		temp->next = node2;
		node1->next = node2->next;
		node2->next = node1;
		temp = node1;
	}
	return dummyHead.next;
}//优解，链表操作考虑添加一个哑结点。

void PrintList(struct ListNode* head) {
    while (head) {
        printf("%d ", head->val);
        head = head->next;
    }
	printf("\n");
}
void* ListInsert(struct ListNode* head) {
	struct ListNode* p1 = NULL, * p2 = head;
	while (p2 && p2->next)
		p2 = p2->next;
	while (1) {
		p1 = (struct ListNode*)malloc(sizeof(struct ListNode));
		printf("Input：");
		scanf("%d", &p1->val);
		if (p1->val == 0) {
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
int main() {
	struct ListNode* head = NULL;
	head = ListInsert(head);
	head = swapPairs(head);
	PrintList(head);
	return 0;
}