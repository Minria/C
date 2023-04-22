
#include<stdio.h>
#include<stdbool.h>
#define InitSize 100//���ȳ�ʼ����
typedef struct List {
	int* data;//ָʾ��̬���������ָ��
	int maxSize, usedSize;//������������͵�ǰ����
}SeqList;

//��˳����ʸ�Ԫ��
void PrintList(SeqList* list) {
	for (int i = 0; i < list->usedSize; i++)
		printf("%d ", list->data[i]);
	printf("\n");
}
//��ȡ���Ա�ʹ�ó���
int Length(SeqList* list) {
	return list->usedSize;
}
//��pos�����Ԫ��data����Ҫ��֤pos����Ϸ�
void ListInsert(SeqList* list, int pos, int data) {
	if (pos<0 || pos>list->usedSize) {
		printf("����λ�ò��Ϸ�\n");
		return;
	}
	if (isFull(list)) {
		int* p = (int*)realloc(list->data, list->maxSize + 10);
		if (p == NULL) {
			printf("˳�����������ʧ��\n");
			return;
		}
		printf("˳������ݳɹ�\n��ʼ�ռ�%d\n��ǰ�ռ�%d\n", 10, list->maxSize + 10);
		list->data = p;
		p = NULL;
		list->maxSize += 10;
	}
	for (int i = list->usedSize; i > pos; i--) {
		list->data[i] = list->data[i - 1];
	}
	list->data[pos] = data;
	list->usedSize++;
	printf("��ӳɹ�\n");
}
//�ж����Ա��Ƿ������Ա�����
bool isFull(SeqList* list) {
	if (list->usedSize == list->maxSize) {
		return true;
	}
	else {
		return false;
	}
}
//�ж��Ƿ����ĳ��Ԫ��
bool contains(SeqList* list, int toFind) {
	for (int i = 0; i < list->usedSize; i++) {
		if (list->data[i] == toFind) {
			return true;
		}
	}
	printf("Ԫ�ز�����");
	return false;
}
//����ĳ��Ԫ�أ��������±�
int search(SeqList* list, int toFind) {
	for (int i = 0; i < list->usedSize; i++) {
		if (list->data[i] == toFind) {
			return i;
		}
	}
	printf("����ʧ��");
	return -1;
}
//�õ�pos��ֵ
int GetElem(SeqList* list, int pos) {
	if (pos < 0 || pos >= list->usedSize) {
		printf("����λ�ò��Ϸ�,����ֵ-1");
		return -1;
	}
	else {
		printf("�ҵ���");
		return list->data[pos];
	}
}
//ɾ����һ�����ֵ�ֵ
void ListDelete(SeqList* list, int toRemove) {
	int n = search(list, toRemove);
	if (n < 0) {
		printf("Ԫ�ز�����\n");
		return;
	}
	for (int i = n; i < list->usedSize - 1; i++) {
		list->data[i] = list->data[i + 1];
	}
	list->usedSize--;
	printf("ɾ���ɹ�");
}
//��ձ�
void DestroyList(SeqList* list) {
	free(list->data);
	list->usedSize = 0;
	printf("�ɹ����\n");
}