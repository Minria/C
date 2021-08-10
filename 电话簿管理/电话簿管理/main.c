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
		case 1:
			head = ListInsert(head);
			ListSave(head);
			break; 
		case 2:
			head = ListLoad(head);
			ListPrint(head);
			break;
		case 3:
			head = ListLoad(head);
			head = ListDel(head);
			ListSave(head);
			break;
		case 4:
			head = ListLoad(head);
			ListFind(head); 
			break;
		case 5:
			head = ListLoad(head);
			head = ListChange(head); 
			ListSave(head);
			break;
		case 6:
			head = ListLoad(head);
			ListPrint(head); break;
		default:printf("重新输入>>");
			break;
		}

	}
}