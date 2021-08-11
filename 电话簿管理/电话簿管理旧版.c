Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore

@wfm666
wfm666
/
20210706
Private
1
00
Code
Issues
Pull requests
Actions
Projects
Security
Insights
Settings
20210706 / 20210706 / 源.cpp
@wfm666
wfm666 添加项目文件。
Latest commit 466dd77 on 6 Jul
History
1 contributor
518 lines(511 sloc)  10.2 KB

#define _CRT_SECURE_NO_WARNINGS
#include<string.h> 
#include<stdio.h> 
#include<stdlib.h> 
#include<malloc.h> 
typedef struct lianxiren
{
	char job[30];
	char number[20];
	char name[10];
	char email[30];
	struct lianxiren* next;
}lianxiren;
#define LEN sizeof(lianxiren) 
lianxiren* creat_list()
{
	lianxiren* head, * p1, * p2;
	char name[10];
	int n = 0;
	head = NULL;
	p1 = (lianxiren*)malloc(LEN);
	p2 = p1;
	printf("请输入姓名（姓名为0时停止创建）:");
	gets_s(name);
	if (strcmp(name, "0") == 0)
		return 0;
	else
	{
		strcpy(p1->name, name);
		printf("请输入电话号码:"); gets_s(p1->number);
		printf("请输入工作单位:"); gets_s(p1->job);
		printf("请输入E-mail:"); gets_s(p1->email);
	}
	while (1)
	{
		n++;
		if (n == 1)
			head = p1;
		else
			p2->next = p1;
		p2 = p1;
		printf("请输入姓名（姓名为0时停止创建）:");
		gets_s(name);
		if (strcmp(name, "0") == 0)break;
		else
		{

			p1 = (lianxiren*)malloc(LEN);
			strcpy(p1->name, name);
			printf("请输入电话号码:"); gets_s(p1->number);
			printf("请输入工作单位:"); gets_s(p1->job);
			printf("请输入E-mail:"); gets_s(p1->email);
		}
	}p2->next = NULL;
	return head;
}//链表创建函数 
void print_list(lianxiren* head)
{
	void caidan();
	int n = 0;
	printf("现在通讯录中有如下成员:");
	while (head != NULL)
	{
		printf("\n名字:"); puts(head->name);
		printf("\n电话号码:"); puts(head->number);
		printf("\n工作单位:"); puts(head->job);
		printf("\nE-mail:");
		puts(head->email);
		putchar('\n');
		head = head->next;
		n++;
		if (n % 8 == 0)
		{
			printf("按回车键显示下一页");
			getchar();
			system("cls");
			caidan();
		}
	}
	printf("总共%d个联系人\n", n);
}
int length(lianxiren* head)
{
	int n = 0;
	lianxiren* p;
	p = head;
	while (p != NULL)
	{
		p = p->next; n++;
	}
	return n;
}
void paixu1(lianxiren* head)
{
	void caidan();
	int n = length(head);
	int i, j;
	lianxiren temp, * p;
	p = head;
	lianxiren a[100];
	for (i = 1; i <= n; i++)
	{
		strcpy(a[i].name, p->name);
		strcpy(a[i].number, p->number);
		strcpy(a[i].job, p->job);
		strcpy(a[i].email, p->email);
		p = p->next;
	}
	for (i = 1; i <= n - 1; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			if (strcmp(a[j].number, a[j + 1].number) > 0)

			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	printf("现在通讯录中有如下成员:");
	for (i = 1; i <= n; i++)
	{
		printf("\n名字:"); puts(a[i].name);
		printf("\n电话号码:"); puts(a[i].number);
		printf("\n工作单位:"); puts(a[i].job);
		printf("\nE-mail:"); puts(a[i].email);
		putchar('\n');
		if (i % 8 == 0)
		{
			printf("按回车键显示下一页");
			getchar();
			system("cls");
			caidan();
		}
	}
	printf("总共%d个联系人\n", n);
}
void paixu2(lianxiren* head)
{
	void caidan();
	int n = length(head);
	int i, j;
	lianxiren temp, * p;
	p = head;
	lianxiren a[100];
	for (i = 1; i <= n; i++)
	{
		strcpy(a[i].name, p->name);
		strcpy(a[i].number, p->number);
		strcpy(a[i].job, p->job);
		strcpy(a[i].email, p->email);
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
	printf("现在通讯录中有如下成员:");
	for (i = 1; i <= n; i++)
	{
		printf("\n名字:"); puts(a[i].name);
		printf("\n电话号码:"); puts(a[i].number);
		printf("\n工作单位:"); puts(a[i].job);
		printf("\nE-mail:"); puts(a[i].email);
		putchar('\n');
		if (i % 8 == 0)
		{
			printf("按回车键显示下一页");
			getchar();
			system("cls");
			caidan();
		}
	}
	printf("总共%d个联系人\n", n);
}
void paixu_list(lianxiren* head)
{
	void caidan();
	if (head == NULL)
	{
		printf("电话簿为空，请重新创建!");
		return;
	}
	char a;
	printf("1,按电话号码升序排序\n2,按姓名字母升序排序\n");
	printf("请选择一种排序方法:");
	a = getchar();
	getchar();
	switch (a)
	{
	case'1':paixu1(head); break;
	case'2':paixu2(head); break;
	default:printf("输入有误!\n"); break;
	}
}
void chazhao1(lianxiren* head)
{
	if (head == NULL)
	{
		printf("电话簿为空，请重新创建"); return;
	}
	char name[10]; printf("请输入名字:");
	gets_s(name);
	while (strcmp(name, head->name) != 0)
	{
		head = head->next;
		if (head == NULL)
		{
			printf("电话簿未有此联系人\n");
			return;
		}
	}
	printf("%s的电话号码为:", name);
	puts(head->number);
	printf("\n工作单位:");
	puts(head->job);
	printf("\nE-mail:");
	puts(head->email);
}//通过名字查找 
void chazhao2(lianxiren* head)
{
	if (head == NULL)
	{
		printf("电话簿为空，请重新创建");
		return;
	}
	char number[20];
	printf("请输入电话号码:");
	gets_s(number);
	while (strcmp(number, head->number) != 0)
	{
		head = head->next;
		if (head == NULL)
		{
			printf("电话簿未有此联系人\n");
			return;
		}
	}
	printf("%s的主人为:", number);
	puts(head->name);
	printf("\n工作单位:");
	puts(head->job);
	printf("\nE-mail:");
	puts(head->email);
}//通过电话号码查找 

void chazhao(lianxiren* head)
{
	int n;
	printf("    1,通过名字查找\n    2,通过电话号码查找\n    3,退出\n请选择你需要的服务:");
	scanf("%d", &n);
	getchar();
	while (1)
	{
		switch (n)
		{
		case 1:
		{chazhao1(head);
		printf("请选择服务项:");
		scanf("%d", &n);
		getchar();
		}break;
		case 2:
		{
			chazhao2(head);
			printf("请选择服务项:");
			scanf("%d", &n); getchar();
		}break;
		case 3:
			return; break;
		default: {printf("输入不正确!");
			printf("请选择服务项:");
			scanf("%d", &n); getchar();
		}break;
		}
	}
}//查找联系人 
void add_list(lianxiren* head)
{
	lianxiren* p1, * p2, * h;
	char name[10];
	printf("请输入名字(名字为0时停止)");
	gets_s(name);
	if (strcmp(name, "0") != 0)
	{
		p1 = (lianxiren*)malloc(LEN);
		strcpy(p1->name, name);
		printf("请输入电话号码:");
		gets_s(p1->number);
		printf("请输入工作单位:");
		gets_s(p1->job);
		printf("请输入E-mail:");
		gets_s(p1->email);
	}

	else
		return;
	h = p1;
	while (1)
	{
		p2 = p1;
		printf("请输入名字(名字为0时停止)");
		gets_s(name);
		if (strcmp(name, "0") == 0)break;
		else
		{
			p1 = (lianxiren*)malloc(LEN);
			strcpy(p1->name, name);
			printf("请输入电话号码:");
			gets_s(p1->number);
			printf("请输入工作单位:"); gets_s(p1->job);
			printf("请输入E-mail:"); gets_s(p1->email);
			p2->next = p1;
		}
	}
	p1 = head->next;
	head->next = h;
	p2->next = p1;
}//添加链表函数 
lianxiren* delete_list(lianxiren* head)
{
	char a[20];
	printf("请输入联系人名字或电话:");
	gets_s(a);
	if (head == NULL)
	{
		printf("电话簿为空，请重新创建");  return head;
	}
	lianxiren* p = head, * p1;
	while (strcmp(a, p->name) != 0 && strcmp(a, p->number) != 0)
	{
		p1 = p;
		p = p->next;
		if (p == NULL)
		{
			printf("电话簿未有此联系人\n");
			return head;
		}
	}
	printf("查找到了!");
	printf("\n名字:"); puts(p->name);
	printf("\n电话号码:"); puts(p->number);
	printf("\n工作单位:"); puts(p->job);
	printf("\nE-mail:"); puts(p->email);
	putchar('\n'); char n; printf("是否删除该联系人(Y/N)");
	n = getchar();
	switch (n)
	{
	case 'y': case 'Y':
	{
		if (p == head)
		{
			head = p->next;
			free(p);
		}
		else
		{
			p1->next = p->next; free(p);
		}
		printf("成功删除!");
	}break;
	case 'N': case 'n':printf("取消删除!"); break;
	default:printf("输入错误!"); break;
	} return head;
}//删除链表函数 
void save_list(lianxiren* head)
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
	lianxiren* p1 = head;
	while (p1 != NULL)
	{
		if (fwrite(p1, LEN, 1, fp) != 1)
		{
			printf("cannot open file\n");
			return;
		}
		p1 = p1->next;
	}
	printf("保存完毕!\n"); fclose(fp);
}//文件写入函数 
lianxiren* load_list(lianxiren* head)
{
	FILE* fp;
	if ((fp = fopen("dianhuabu.dat", "rb")) == NULL)
	{
		printf("电话簿为空，请重新创建\n");
		exit(0);
	}lianxiren* p1, * p2;
	p1 = (lianxiren*)malloc(LEN);
	if (fread(p1, LEN, 1, fp) == 0)
	{
		printf("电话簿为空，请重新创建");
		return head;
	}
	head = p1;
	p2 = p1; p1 = (lianxiren*)malloc(LEN);
	while (fread(p1, LEN, 1, fp))
	{
		p2->next = p1;
		p2 = p1;
		p1 = (lianxiren*)malloc(LEN);
	}
	p2->next = NULL;
	free(p1);
	return(head);
	fclose(fp);
}//文件读取函数 
void caidan()
{
	printf("           欢迎进入电话簿系统            \n");
	printf("********************************************\n");
	printf("        1、创建电话簿(会将原有电话簿覆盖)\n");
	printf("        2、查找联系人               \n");
	printf("        3、添加联系人               \n");
	printf("        4、删除联系人               \n");
	printf("        5、显示联系人               \n");
	printf("        6、查看电话簿(排序)         \n");
	printf("        7、退出系统                 \n");
	printf("********************************************\n");
}//菜单界面 



void main()
{
	system("cls");
	caidan();//进入菜单界面  
	printf("          请选择你所需要的服务:");
	int n;
	scanf("%d", &n);
	getchar();
	lianxiren* head;
	while (1)
	{
		system("cls");
		caidan();
		switch (n)
		{
		case 1:
		{
			head = creat_list();
			system("cls");
			caidan();
			print_list(head);
			save_list(head);
			printf("********************************************\n");
			printf("\n如需要其他服务，请重新输入:");
			scanf("%d", &n);   getchar(); }break;//创建电话簿（创建链表、写入文件,释放链表） 
		case 2:
		{
			head = load_list(head);
			chazhao(head);
			printf("********************************************\n");
			printf("\n如需要其他服务，请重新输入:");
			scanf("%d", &n);   getchar(); }break;//查找联系人（读入文件、查找函数、释放链表） 
		case 3:
		{
			head = load_list(head);
			add_list(head);
			system("cls");
			caidan();
			save_list(head);
			printf("********************************************\n");
			printf("\n如需要其他服务，请重新输入:");
			scanf("%d", &n);   getchar(); }break;//添加联系人（读入文件、添加链表、写入文件、释放链表） 
		case 4:
		{
			head = load_list(head);
			head = delete_list(head);
			save_list(head);
			printf("********************************************\n");
			printf("\n如需要其他服务，请重新输入:");
			scanf("%d", &n);
			getchar(); }break;//删除联系人（读入文件，删除链表、写入文件、释放链表）  
		case 5:
		{
			head = load_list(head);
			print_list(head);
			save_list(head);
		}
		case 6:
		{
			head = load_list(head);
			paixu_list(head);
			printf("********************************************\n");
			printf("\n如需要其他服务，请重新输入:");
			scanf("%d", &n);   getchar(); }break;//查看电话簿（读入文件，排序链表、释放链表）   
		case 7:
		{   system("cls");   return; }break;//退出  
		default:
		{
			printf("\n输入有误,请重新输入:");
			scanf("%d", &n);
			getchar();
		}break;
		}
	}
}
© 2021 GitHub, Inc.
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
Loading complete