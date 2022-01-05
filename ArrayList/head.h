#pragma once
#include<stdio.h>
#include<stdbool.h>
#define InitSize 100//表长度初始定义
typedef struct List {
    int* data;//指示动态分配数组的指针
    int maxSize, usedSize;//数组最大容量和当前容量
}SeqList;
void PrintList(SeqList* list);
int Length(SeqList* list);
void ListInsert(SeqList* list, int pos, int data);
bool isFull(SeqList* list);
bool contains(SeqList* list, int toFind);
int search(SeqList* list, int toFind);
int GetElem(SeqList* list, int pos);
void ListDelete(SeqList* list, int toRemove);
void DestroyList(SeqList* list);