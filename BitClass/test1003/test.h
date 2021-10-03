#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>



typedef struct LNode {
	int data;
	struct LNode* next;
}LNode;


LNode* InitList(LNode* head);
LNode* headInsert(LNode* head);
LNode* tailInsert(LNode* head);

void ListPrintf(LNode* head);