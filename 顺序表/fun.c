#include"head.h"

void menu() {
	printf("------1.添加元素-------------\n");
	printf("------2.删除元素-------------\n");
	printf("------3.打印元素-------------\n");
	printf("------4.获取线性表长度-------\n");
	printf("------5.查找元素-------------\n");
	printf("------6.清空线性表-----------\n");
}
void display(Node* list) {
	for (int i = 0; i < list->usedSize; i++)
		printf("%d ", list->data[i]);
	printf("\n");
}

int getSize(Node* list) {
	return list->usedSize;
}
void add(Node *list, int pos, int data) {
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
bool isFull(Node* list) {
	if (list->usedSize == list->maxSize) {
		return true;
	}
	else {
		return false;
	}
}
bool contains(Node* list, int toFind) {
	for (int i = 0; i < list->usedSize; i++) {
		if (list->data[i] == toFind) {
			return true;
		}
	}
	printf("元素不存在");
	return false;
}
int search(Node* list, int toFind) {
	for (int i = 0; i < list->usedSize; i++) {
		if (list->data[i] == toFind) {
			return i;
		}
	}
	printf("查找失败");
	return -1;
}
int getPos(Node* list, int pos) {
	if (pos < 0 || pos >= list->usedSize) {
		printf("输入位置不合法,返回值-1");
		return -1;
	}
	else {
		printf("找到了");
		return list->data[pos];
	}
}
void del(Node* list, int toRemove) {
	int n = search(list, toRemove);
	if (n < 0) {
		printf("元素不存在\n");
		return;
	}
	for (int i = n; i < list->usedSize-1; i++) {
		list->data[i] = list->data[i + 1];
	}
	list->usedSize--;
	printf("删除成功");
}
void clear(Node* list) {
	list->usedSize = 0;
	printf("成功清除\n");
}