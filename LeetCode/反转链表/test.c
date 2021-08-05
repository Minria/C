#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 struct ListNode {
    int val;
    struct ListNode *next;
 };
 
//双指针;一个在前一个在后将链表反转
struct ListNode* reverseList(struct ListNode* head) {
	struct ListNode* cur=NULL, * pre=head;
	while (pre) {
		struct ListNode* temp = pre->next;
		pre->next = cur;
		cur = pre;
		pre = temp;
	}
	return cur;
}