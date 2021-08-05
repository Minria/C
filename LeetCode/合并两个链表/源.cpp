#define _CRT_SECURE_NO_WARNINGS
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    ListNode* head, p1, p2;
    int n = 0;
    p1 = p2 = (ListNode*)mallco(sizeof(ListNode));
    while (l1 && l2) {
        int max = 0;
        if (l1->val > l2->val) {
            max = l1->val;
            l1 = l1->next;
        }
        else {
            max = l2->val;
            l2 = l2->next;
        }
        n++;
        if (n == 1) {
            head = p1;
        }
        else {
            p2->next = p1;
        }
        p2 = p1;
        p1 = (ListNode*)mallco(sizeof(ListNode));
    }p2->next = NULL;
    return head;
}