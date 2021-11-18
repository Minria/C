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

//菜单
void menu();
//头插法
LNode* addHead(LNode* head);
//尾插法
LNode* addLast(LNode* head);
//从头到尾打印链表
void printfList(LNode* head);
//删除链表第一次出现的某个元素
void del(LNode* head,int val);

//反转链表
LNode* reverse(LNode* head);