#define _CRT_SECURE_NO_WARNINGS
#include"book.h"

int main() {
	PhoneBook* head = NULL;
	head = ListCreat(head);
	int n = 0;
	while (1) {
		menu();
		printf("选择服务>>");
		scanf("%d", &n);
		switch (n)
		{
		case 0:printf("程序即将退出"); break;
		case 1:head = ListInsert(head); break;
		case 2:ListPrint(head); break;
		case 3:head = ListDel(head); break;
		case 4:ListFind(head); break;
		default:printf("重新输入>>");
			break;
		}

	}
}