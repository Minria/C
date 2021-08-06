#define _CRT_SECURE_NO_WARNINGS
#include"main.h"

int main() {
	Nums* head = NULL;
	head = ListCreat(head);
	int n = 0;
	menu();
	while (1) {
		printf("输入:");
		scanf("%d", &n);
		switch (n) {
		case 0:break;
		case 1:head=ListInsert(head); break;
		case 2: {
			printf("输入删除数值:");
			int temp = 0;
			scanf("%d", &temp);
			head = ListDel(head, temp);
			break;
		}
		case 3:ListPrint(head); break;
		case 4:printf("%d\n", ListLength(head)); break;
		case 5:ListChange(head); break;
		default:printf("重新输入\n");
			break;
		}
	}
		return 0;
}
