#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

typedef struct LNode {
	int val;
	struct LNode* next;
}LNode;

LNode* addHead(LNode* head);
LNode* addLast(LNode* head);
void printfList(LNode* head);