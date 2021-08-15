#define _CRT_SECURE_NO_WARNINGS
#include<malloc.h>
struct ListNode {
	int val;
	struct ListNode *next;
};
//方法1
//先知长度，正向遍历找到这个结点，然后删除
//为了避免特殊情况，添加一个哑结点在头部防止头结点删除时出错。
int LengthList(struct ListNode* head) {
	int count = 0;
	while (head) {
		count++;
		head = head->next;
	}
	return count;
}
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
	int i = 0;
	int len = LengthList(head);
	struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
	dummy->next = head;
	struct ListNode* p1 = dummy, * p2 = head;
	for (i = 0; i <= len - n; i++) {
		p1 = p2;
		p2 = p2->next;
	}
	p1->next = p2->next;
	free(p2);
	p1 = dummy->next;
	free(dummy);
	return p1;
}
//还是第一个思路，这个没有哑结点
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
	int i = 0;
	int len = LengthList(head);
	struct ListNode* p1 =NULL, * p2 = head;
	for (i = 0; i < len - n; i++) {
		p1 = p2;
		p2 = p2->next;
	}
	if (p2 == head) {
		head = p2->next;
		free(p2);
	}
	else
	{
		p1->next = p2->next;
		free(p2);
	}
	return head;
} 
//方法2
//一个一个拿出来，然后通过找到倒数第二个，由于动态性我们可以通过栈来解决
//方法3 
//双指针,快指针超前慢指针n个，当快指针指向尾的，慢指针恰好指向被删除结点
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
	struct ListNode* slow = head, * fast = head;
	while (n) {
		fast = fast->next;
		n--;
	}
	while (fast) {
		fast = fast->next;
		slow = slow->next;
	}
	slow->next = slow->next->next;
	return head;
}