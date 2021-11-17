#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct LNode {
	int val;
	struct LNode* next;
}LNode;
void menu();
LNode* addHead(LNode* head);
LNode* addLast(LNode* head);
void printfList(LNode* head);
void del(LNode* head,int val);