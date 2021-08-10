#define _CRT_SECURE_NO_WARNINGS

#include"book.h"




void menu() {
	printf("0.退出\n");
	printf("1.添加\n");
	printf("2.打印\n");
	printf("3.删除\n");
	printf("4.查找\n");
	printf("5.修改\n");
	printf("6.排序\n");
}
void* ListCreat(struct PhoneBook* head) {
	head = NULL;
	return head;
}
void* ListInsert(struct PhoneBook* head) {
	PhoneBook* p1 = NULL, *p2 = head;
	while (p2 && p2->next) {
		p2 = p2->next;
	}
	while (1) {
		p1 = (PhoneBook*)malloc(sizeof(PhoneBook));
		printf("输入姓名>>"); scanf("%s", &p1->name);
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
	if (head == NULL) {
		printf("联系人为空;即将返回");
		return;
	}
	printf("输入查找姓名或号码>>");
	char str[20] = { 0 };
	scanf("%s", str);
	struct PhoneBook* p1 = head,*p2=NULL;
	while (strcmp(p1->name, str) != 0 && strcmp(p1->telnum, str) != 0) {
		p2 = p1;
		p1 = p1->next;
		if (p1 == NULL) {
			printf("电话簿未有此联系人");
			return head;
		}
	}
	printf("找到联系人信息如下\n");
	printf("姓名>>%s\n", p1->name);
	printf("号码>>%s\n", p1->telnum);
	printf("输入yes删除;输入no取消\n");
	char str1[5] = { 0 };
	while (1) {
		printf("输入yes或no>>");
		gets(str1,4);
		if (strcmp(str1, "yes") == 0) {
			if (p1 == head) {
				head = p1->next;
				free(p1);
			}
			else {
				p2->next = p1->next;
				free(p1);
			}
			printf("删除成功\n");
			break;
		}
		else if (strcmp(str1, "no") == 0) {
			printf("取消删除\n");
			break;
		}
		else
			printf("重新输入\n");
	}
	return head;
}
void ListFindByName(struct PhoneBook* head){
	char name[20] = { 0 };
	printf("输出要查找的姓名>>");
	scanf("%s", name);
	int count = 0;
	while (head) {
		if (strcmp(head->name, name) == 0) {
			count = 1;
			printf("姓名>>%s\n", head->name);
			printf("号码>>%s\n", head->telnum);
			printf("------------------------\n");
		}
		head = head->next;
	}
	if (count == 0)
		printf("没有该联系人");
}
void ListFind(struct PhoneBook *head) {
	printf("0.退出\n");
	printf("1.按姓名查询\n");
	printf("2.按号码查询\n");
	int n = 0;
	while (1) {
		printf("Input>>");
		scanf("%d", &n);
		getchar();
		if (n == 0) break;
		switch (n)
		{
		case 1:ListFindByName(head); break;
		case 2:ListFindByNum(head); break;
		default:printf("无法执行该操作\n");break;
		}
	}
}
void ListFindByNum(struct PhoneBook* head) {
	char nums[20] = { 0 };
	printf("输出要查找的号码>>");
	scanf("%s", nums);
	int count = 0;
	while (head) {
		if (strcmp(head->telnum, nums) == 0) {
			count = 1;
			printf("姓名>>%s\n", head->name);
			printf("号码>>%s\n", head->telnum);
			printf("------------------------\n");
		}
		head = head->next;
	}
	if (count == 0)
		printf("没有该联系人");
}
void* ListChange(struct PhoneBook* head) {
	struct PhoneBook* p1 = head;
	printf("输入要修改的姓名或者号码>>");
	char str[20] = { 0 };
	scanf("%s", str);
	while (p1) {
		if (strcmp(p1->name, str) == 0 || strcmp(p1->telnum, str) == 0) {
			printf("姓名>>%s\n", p1->name);
			printf("号码>>%s\n", p1->telnum);
			if (strcmp(p1->name, str) == 0) {
				printf("修改后姓名>>");
				scanf("%s", p1->name);
			}
			else {
				printf("修改后号码\n");
				scanf("%s", p1->telnum);
			}
			return head;
		}
		p1 = p1->next;
	}
	if (p1 == NULL)
		printf("未查询到\n");
	return head;
}
int ListLength(struct PhoneBook* head) {
	int count = 0;
	while (head) {
		count++;
		head = head->next;
	}
	return count;
}
void* ListSort(struct PhoneBook* head) {
	int n = ListLength(head);
	int i, j;
	struct PhoneBook a[200] = { 0 }, * p = head, temp;
	for (i = 0; i <n; i++)
	{
		strcpy(a[i].name, p->name);
		strcpy(a[i].telnum, p->telnum);
		p = p->next;
	}
	for (i = 1; i <= n - 1; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			if (strcmp(a[j].name, a[j + 1].name) > 0)
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("姓名>>%s\n", a[i].name);
		printf("号码>>%s\n", a[i].telnum);
		printf("------------------------");
	}
}
void ListPrint(struct PhoneBook* head) {
	while (head) {
		printf("姓名>>%s\n", head->name);
		printf("号码>>%s\n", head->telnum);
		head = head->next;
	}
	printf("\n\n");
}
void ListSave(struct PhoneBook* head)
{
	FILE* fp;
	if ((fp = fopen("dianhuabu.dat", "wb")) == NULL)
	{
		printf("File cannot be opened\n");
		exit(0);
	}
	if (head == NULL)
	{
		printf("通讯录为空\n");
		return;
	}
	PhoneBook* p1 = head;
	while (p1 != NULL)
	{
		if (fwrite(p1, sizeof(PhoneBook), 1, fp) != 1)
		{
			printf("cannot open file\n");
			return;
		}
		p1 = p1->next;
	}
	printf("保存完毕!\n"); fclose(fp);
}//文件写入函数 
void* ListLoad(struct PhoneBook** head)
{
	FILE* fp;
	if ((fp = fopen("dianhuabu.dat", "rb")) == NULL)
	{
		printf("电话簿为空，请重新创建\n");
		exit(0);
	}
	PhoneBook** p1, * p2;
	p1 = (PhoneBook*)malloc(sizeof(PhoneBook));
	if (fread(p1, sizeof(PhoneBook), 1, fp) == 0)
	{
		printf("电话簿为空，请重新创建");
		return head;
	}
	head = p1;
	p2 = p1; p1 = (PhoneBook*)malloc(sizeof(PhoneBook));
	while (fread(p1, sizeof(PhoneBook), 1, fp))
	{
		p2->next = p1;
		p2 = p1;
		p1 =(PhoneBook*)malloc(sizeof(PhoneBook));
	}
	p2->next = NULL;
	free(p1);
	return(head);
	fclose(fp);
}//文件读取函数 