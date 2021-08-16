#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<malloc.h>


//int main() {
// 
//	int b=++(a++);
//	printf("%d", a);
//	return 0;
//}

//int f(int a) {
//	int b = 0;
//	static int c = 3;
//	a = ++c, ++b;
//	return a;
//}
//int main() {
//	int a = 2, i = 0, k = 0;
//	for (i = 0; i < 2; i++)
//		k = f(a++);
//	printf("%d", k);
//	return 0;
//}

//int x = 3;
//void inc() {
//	static int x = 1;
//	x *= (x + 1);
//	printf("%d\n", x);
//	return;
//}
//int main() {
//	int i = 1;
//	for (i = 0; i < x; i++)
//		inc();
//	return 0;
//}
// 
// 
//void PreOrder(BiTree T) {
//	if (T) {
//		visit(T);
//		PreOrder(T->lchild);
//		PreOrder(T->rchild);
//	}
//}
//
//void InOrder(BiTree T) {
//	if (T) {
//		Inorder(T->lchild);
//		Visit(T);
//		Inorder(T->rchild);
//	}
//}
//void PostOrder(BiTree T) {
//	if (T) {
//		PostOrder(T->lchild);
//		PostOrder(T->rchild);
//		visit(T);
//	}
//}

//void InOrder(BiTree T) {
//	InitStack(S);
//	BiTree p = T;
//	while (p || !IsEmpty(S)) {
//		if (p) {
//			Push(S, p);
//			p->lchild;
//		}
//		else {
//			Pop(S, p);
//			visit(p);
//			p->rchild;
//		}
//	}
//}

//void PreOrder(BiTree T) {
//	InitStack(S);
//	BiTree p = T;
//	while (p || !IsEmpty(S)) {
//		if (p) {
//			visit(p);
//			Push(S, p);
//			p->lchild;
//		}
//		else {
//			Pop(S, p);
//			p->rchild;
//		}
//	}
//}