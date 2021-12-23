#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>

typedef struct ListNode {
    int data;
    struct ListNode* next;
}ListNode,*LinkNode;




bool push(ListNode S, int e) {
    LinkNode p = (LinkNode)malloc(sizeof(ListNode));
    p->data = e;
    p->next = S;
    S = p;
    return true;
}
bool empty(LinkNode S) {
    if (S == NULL) {
        return true;
    }
    else {
        return false;
    }
}
bool pop(LinkNode S, int* e) {
    if (empty(S)) {
        return false;
    }
    *e = S->data;
    LinkNode p = S;
    S = S->next;
    free(p);
    return true;
}

int main() {
    LinkNode S = NULL;
    push(S, 1);
    push(S, 2);
    push(S, 3);
    int x = -1;
    pop(S, &x);
    printf("%d\n", x);
    pop(S, &x);
    printf("%d\n", x);    
    pop(S, &x);
    printf("%d\n", x);
}