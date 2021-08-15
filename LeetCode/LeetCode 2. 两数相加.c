#define _CRT_SECURE_NO_WARNINGS
//struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
//    struct ListNode* head = NULL, * tail = NULL;
//    int carry = 0;
//    while (l1 || l2) {
//        int n1 = l1 ? l1->val : 0;
//        int n2 = l2 ? l2->val : 0;
//        int sum = n1 + n2 + carry;
//        if (!head) {
//            head = tail = malloc(sizeof(struct ListNode));
//            tail->val = sum % 10;
//            tail->next = NULL;
//        }
//        else {
//            tail->next = malloc(sizeof(struct ListNode));
//            tail->next->val = sum % 10;
//            tail = tail->next;
//            tail->next = NULL;
//        }
//        carry = sum / 10;
//        if (l1) {
//            l1 = l1->next;
//        }
//        if (l2) {
//            l2 = l2->next;
//        }
//    }
//    if (carry > 0) {
//        tail->next = malloc(sizeof(struct ListNode));
//        tail->next->val = carry;
//        tail->next->next = NULL;
//    }
//    return head;
//}

int ListLength(struct ListNode* head) {
	int count = 0;
	while (head) {
		count++;
		head = head->next;
	}
	return count;
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	int n1 = ListLength(l1);
	int n2 = ListLength(l2);
	struct ListNode* p1 = NULL, *p2 = NULL;
	if (n1 >= n2) {
		p1 = l1;
		p2 = l2;
	}
	else {
		p1 = l2;
		p2 = l1;
	}
	int i = 0, plus = 0;
	for (i = 0; i < n1; i++) {
		p1->val = p1->val+p2 ->val + plus;
		plus = p1->val > 9 ? 1 : 0;
		if (plus == 1)
			p1->val -= 10;
		if (i == n1 - 1) {
			if (plus == 1) {
				p1->next = malloc(sizeof(struct ListNode));
				p1->next->val = plus;
				p1->next->next = NULL;
			}
			break;
		}
		p1 = p1->next;
		if (i < n2 - 1)
			p2 = p2->next;
		else
			p2->val = 0;

	}
	if (n1 >= n2)  
		return l1;
	else
		return l2;
}

