#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<malloc.h>
struct ListNode {
    int val;
    struct ListNode* next;
};
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (head == NULL) return head;
    struct ListNode* p1 = head, * p2 = head->next;
    int temp = head->val;
    while (p2) {
        if (p2->val != temp) {
            temp = p2->val;
            p1->next = p2;
            p1 = p2;
        }
        p2 = p2->next;
    }p1->next = p2;
    return head;
}
int main() {

}