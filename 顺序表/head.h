#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include <stdbool.h> 
#include<stdlib.h>

#define MAXSIZE 100
typedef struct Node {
	int* data;
	int usedSize;
	int maxSize;
}Node;

void display(Node list);
int getSize(Node list);
void add(Node* list, int pos, int data,int* len);
bool isFull(Node list);
bool contains(Node list, int toFind);
int search(Node list, int toFind);
int getPos(Node list, int pos);
void del(Node* list,int toRemove);
void clear(Node list);