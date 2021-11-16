#include"head.h"


void display(Node list) {
	for (int i = 0; i < list.usedSize; i++)
		printf("%d ", list.data[i]);
	printf("\n");
}

int getSize(Node list) {
	return list.usedSize;
}
void add(Node list, int pos, int data) {
	if (pos<0 || pos>list.usedSize) {
		printf("输入位置不合法");
		return;
	}
	if (isFull) {
		int* p = (int*)realloc(list.data, list.maxSize + 10);
		if (p == NULL) {
			printf("顺序表满且扩容失败");
			return;
		}
		list.data = p;
		p = NULL;
		list.maxSize += 10;
	}
	for (int i = list.usedSize; i > pos; i--) {
		list.data[i] = list.data[i - 1];
	}
	list.data[pos] = data;
}
bool isFull(Node list) {
	if (list.usedSize == list.maxSize) {
		return true;
	}
	else {
		return false;
	}
}
bool contains(Node list, int toFind) {
	for (int i = 0; i < list.usedSize; i++) {
		if (list.data[i] == toFind) {
			return true;
		}
	}
	return false;
}
int search(Node list, int toFind) {
	for (int i = 0; i < list.usedSize; i++) {
		if (list.data[i] == toFind) {
			return i;
		}
	}
	return -1;
}
int getPos(Node list, int pos) {
	return list.data[pos];
}
void del(Node list, int toRemove) {
	int n = search(list, toRemove);
	if (n < 0) {
		printf("元素不存在");
		return;
	}
	for (int i = n; i < list.usedSize-1; i++) {
		list.data[i] = list.data[i + 1];
	}
	list.usedSize--;
}
void clear(Node list) {
	list.usedSize = 0;
	printf("成功清除");
}