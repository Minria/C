#pragma once

#include<stdio.h>
#include<string.h>
#include<malloc.h>

typedef struct PhoneBook {
	char name[20];
	char telnum[11];
	struct PhoneBook* next;
}PhoneBook;

void* ListCreat(struct PhoneBook* head);
void* ListInsert(struct PhoneBook* head);
void* ListDel(struct PhoneBook* head);
void ListFindByName(struct PhoneBook* head);
void ListFindByNum(struct PhoneBook* head);
void ListFind(struct PhoneBook* head);
void* ListChange(struct PhoneBook* head);
void ListPrint(struct PhoneBook* head);
