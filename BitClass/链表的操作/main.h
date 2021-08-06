#pragma once


#include<stdio.h>
#include<string.h>
#include<malloc.h>
typedef struct Nums {
	int data;
	struct Nums* next;
}Nums;
int ListLength(Nums* head);
void* ListCreat(Nums* head);
void* ListInsert(Nums* head);
void* ListDel(Nums*head,int n);
void ListChange(Nums* head);
void ListPrint(Nums* head);

