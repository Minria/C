#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
struct ListNode {
	int val;
	struct ListNode* next;
};
//struct ListNode* deleteDuplicates(struct ListNode* head) {
//    if (head == NULL || head->next == NULL) {
//        return head;
//    }
//    int book[201] = { 0 };
//    struct ListNode* p = head;
//    int num = 0;
//    while (p) {
//        num = p->val + 100;
//        book[num]++;
//        p = p->next;
//    }
//    p = head;
//    struct ListNode* l = head;
//    head = NULL;
//    int n = 0;
//    while (p) {
//        num = p->val + 100;
//        if (book[num] == 1) {
//            if (n == 0) {
//                head = p;
//                l = head;
//                ++n;
//            }
//            else {
//                l->next = p;
//                l = l->next;
//            }
//        }
//        p = p->next;
//    }
//    l->next = NULL;
//    return head;
//}


struct ListNode* deleteDuplicates(struct ListNode* head) {
	if (head == NULL || head->next == NULL)
		return head;
	struct ListNode* p1 = head, * p2 = head,* p3=head;
	head = NULL;
	int count = 0;
	while (p2->next) {
		if (count == 0 && p2 ->val != p2->next->val) {
			head = p2;
			p1 = head;
			++count;
		}
		else {
			if (p2->val != p3->val && p2->val != p2->next->val) {
				p1->next = p2;
				p1 = p1->next;
			}
		}
		p3 = p2;
		p2 = p2->next;
	}
	if (p3->val != p2->val) {
		p1->next = p2;
		p1 = p1->next;
	}
	p1->next = NULL;
	return head;
}

