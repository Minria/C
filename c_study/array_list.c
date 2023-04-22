
#include<stdio.h>
#include<stdbool.h>
#define InitSize 100//表长度初始定义
typedef struct List {
	int* data;//指示动态分配数组的指针
	int maxSize, usedSize;//数组最大容量和当前容量
}SeqList;

//按顺序访问各元素
void PrintList(SeqList* list) {
	for (int i = 0; i < list->usedSize; i++)
		printf("%d ", list->data[i]);
	printf("\n");
}
//获取线性表使用长度
int Length(SeqList* list) {
	return list->usedSize;
}
//在pos处添加元素data，需要保证pos输入合法
void ListInsert(SeqList* list, int pos, int data) {
	if (pos<0 || pos>list->usedSize) {
		printf("输入位置不合法\n");
		return;
	}
	if (isFull(list)) {
		int* p = (int*)realloc(list->data, list->maxSize + 10);
		if (p == NULL) {
			printf("顺序表满且扩容失败\n");
			return;
		}
		printf("顺序表扩容成功\n初始空间%d\n当前空间%d\n", 10, list->maxSize + 10);
		list->data = p;
		p = NULL;
		list->maxSize += 10;
	}
	for (int i = list->usedSize; i > pos; i--) {
		list->data[i] = list->data[i - 1];
	}
	list->data[pos] = data;
	list->usedSize++;
	printf("添加成功\n");
}
//判断线性表是否满，以便扩容
bool isFull(SeqList* list) {
	if (list->usedSize == list->maxSize) {
		return true;
	}
	else {
		return false;
	}
}
//判断是否包含某个元素
bool contains(SeqList* list, int toFind) {
	for (int i = 0; i < list->usedSize; i++) {
		if (list->data[i] == toFind) {
			return true;
		}
	}
	printf("元素不存在");
	return false;
}
//查找某个元素，并返回下标
int search(SeqList* list, int toFind) {
	for (int i = 0; i < list->usedSize; i++) {
		if (list->data[i] == toFind) {
			return i;
		}
	}
	printf("查找失败");
	return -1;
}
//得到pos的值
int GetElem(SeqList* list, int pos) {
	if (pos < 0 || pos >= list->usedSize) {
		printf("输入位置不合法,返回值-1");
		return -1;
	}
	else {
		printf("找到了");
		return list->data[pos];
	}
}
//删除第一个出现的值
void ListDelete(SeqList* list, int toRemove) {
	int n = search(list, toRemove);
	if (n < 0) {
		printf("元素不存在\n");
		return;
	}
	for (int i = n; i < list->usedSize - 1; i++) {
		list->data[i] = list->data[i + 1];
	}
	list->usedSize--;
	printf("删除成功");
}
//清空表
void DestroyList(SeqList* list) {
	free(list->data);
	list->usedSize = 0;
	printf("成功清除\n");
}