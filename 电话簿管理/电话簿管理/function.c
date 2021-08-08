#define _CRT_SECURE_NO_WARNINGS
#include"book.h"


void* ListCreat(struct PhoneBook* head) {
	head = NULL;
	return head;
}
void menu() {
	printf("0.退出\n");
	printf("1.添加\n");
	printf("2.打印\n");
	printf("3.删除\n");
}
void* ListInsert(struct PhoneBook* head) {
	PhoneBook* p1 = NULL, *p2 = head;
	while (p2 && p2->next) {
		p2 = p2->next;
	}
	while (1) {
		p1 = (PhoneBook*)malloc(sizeof(PhoneBook));
		printf("输入姓名>>"); scanf("%s",&p1->name);
		if (strcmp(p1->name, "0") == 0) {
			free(p1);
			break;
		}
		printf("输入号码>>"); scanf("%s",&p1->telnum);
		if (head == NULL) {
			head = p1;
			p2 = p1;
		}
		else {
			p2->next = p1;
			p2 = p1;
		}
	}p2->next = NULL;
	return head;
}
void* ListDel(struct PhoneBook* head) {
	int n = 0;
	while (1) {
		printf("0.退出\n");
		printf("1.查找号码\n");
		scanf("%d", &n);
		int count = 0;
		if (n == 0) break;
		else if (n == 1) {
			char nums[11] = { 0 };
			printf("查找号码>>");
			scanf("%s",nums);
			struct PhoneBook* p2 = head, * p1 = p2->next;
			while (p1) {
				if (strcmp(p1->telnum, nums) == 0) {
					printf("查到成功!!!\n");
					count = 1;
					printf("姓名>>%s\n", p1->name);
					printf("号码>>%s\n", p1->telnum);
					printf("输入0退出;输入其他删除\n");
					int a = 0;
					scanf("%s", &a);
					if (a>0) {
						p2->next=p1->next;
						free(p1);
						printf("删除成功!!!\n");
						break;
					}
					else
						break;
					p2 = p1;
					p1 = p1->next;
				}
			}
			if (count == 0)
				printf("未查询到!!!");
		}
		else
			printf("该功能未实现，请重新输入");
	}
	return head;
}
void ListPrint(struct PhoneBook* head) {
	while (head) {
		printf("姓名>>%s\n", head->name);
		printf("号码>>%s\n", head->telnum);
		head = head->next;
	}
	printf("\n\n");
}