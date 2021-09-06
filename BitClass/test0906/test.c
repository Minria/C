#define _CRT_SECURE_NO_WARNINGS
#include<string.h> 
#include<stdio.h> 
#include<stdlib.h> 
#include<malloc.h> 
typedef struct phone_book
{
	char job[30];
	char number[20];
	char name[15];
	char email[30];
	struct phone_book* next;
}phone_book;
#define LEN sizeof(phone_book) 
phone_book* creat_list()
{
	phone_book* head, * p1, * p2;
	int n = 0;
	head = NULL;
	p1 = (phone_book*)malloc(LEN);
	p2 = p1;
	while (1)
	{
		printf("请输入姓名（姓名为0时停止创建）:"); gets(p1->name);
		if (strcmp(p1->name, "0") == 0) break;
		printf("请输入电话号码:"); gets(p1->number);
		printf("请输入工作单位:"); gets(p1->job);
		printf("请输入E-mail:"); gets(p1->email);
		n = n + 1;
		if (n == 1)
			head = p1;
		else
			p2->next = p1;
		p2 = p1;
		p1 = (phone_book*)malloc(LEN);
	}p2->next = NULL;
	return head;
}//链表创建函数 
void print_list(phone_book* head)
{
	void menu();
	int n = 0;
	printf("现在通讯录中有如下成员:");
	while (head != NULL)
	{
		printf("\n名字:"); puts(head->name);
		printf("\n电话号码:"); puts(head->number);
		printf("\n工作单位:"); puts(head->job);
		printf("\nE-mail:"); puts(head->email);
		putchar('\n');
		head = head->next;
		n++;
		if (n % 8 == 0)
		{
			printf("按回车键显示下一页");
			getchar();
			system("cls");
			menu();
		}
	}
	printf("总共%d个联系人\n", n);
}
int length(phone_book* head)
{
	int n = 0;
	phone_book* p;
	p = head;
	while (p != NULL)
	{
		p = p->next; n++;
	}
	return n;
}//判断联系人个数
void sortbynumber(phone_book* head)
{
	void menu();
	int n = length(head);
	int i, j;
	phone_book temp, * p;
	p = head;
	phone_book a[1000];
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
			menu();
		}
	}
	printf("总共%d个联系人\n", n);
}
void sortbyname(phone_book* head)
{
	void menu();
	int n = length(head);
	int i, j;
	phone_book temp, * p;
	p = head;
	phone_book a[100];
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
			menu();
		}
	}
	printf("总共%d个联系人\n", n);
}//排序按照电话号码
void sort_list(phone_book* head)
{
	void menu();
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
	case'1':sortbynumber(head); break;
	case'2':sortbyname(head); break;
	default:printf("输入有误!\n"); break;
	}
}
void findbyname(phone_book* head)
{
	if (head == NULL)
	{
		printf("电话簿为空，请重新创建"); return;
	}
	char name[15]; printf("请输入名字:");
	gets(name);
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
}
void findbynumber(phone_book* head)
{
	if (head == NULL)
	{
		printf("电话簿为空，请重新创建");
		return;
	}
	char number[20];
	printf("请输入电话号码:");
	gets(number);
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
}
void find(phone_book* head)
{
	int n;
	printf("    1,通过名字查找\n    2,通过电话号码查找\n    3,退出\n请选择你需要的服务:");
	scanf("%d", &n);
	getchar();
	while (1)
	{
		if (n == 1)
		{
			findbyname(head);
			printf("请选择服务项:");
			scanf("%d", &n);
			getchar();
		}
		if (n == 2)
		{
			findbynumber(head);
			printf("请选择服务项:");
			scanf("%d", &n);
			getchar();
		}
		if (n == 3)
			return;
		else
		{
			printf("输入不正确!");
			printf("请选择服务项:");
			scanf("%d", &n);
			getchar();
		}
	}
}//查找联系人 
void add_list(phone_book* head)
{
	phone_book* p1, * p2, * h;
	h = NULL;
	char name[15];
	p1 = (phone_book*)malloc(LEN);
	p2 = p1;
	int n = 0;
	while (1)
	{
		printf("请输入名字(名字为0时停止)"); gets(p1->name);
		if (strcmp(p1->name, "0") == 0)break;
		printf("请输入电话号码:"); gets(p1->number);
		printf("请输入工作单位:"); gets(p1->job);
		printf("请输入E-mail:"); gets(p1->email);
		n = n + 1;
		if (n == 1)
			h = p1;
		else
			p2->next = p1;
		p2 = p1;
		p1 = (phone_book*)malloc(LEN);
	}
	p1 = head->next;
	head->next = h;
	p2->next = p1;
}//添加链表函数 
phone_book* delete_list(phone_book* head)
{
	char a[20];
	printf("请输入联系人名字或电话:");
	gets(a);
	if (head == NULL)
	{
		printf("电话簿为空，请重新创建");  return head;
	}
	phone_book* p = head, * p1;
	p1 = NULL;
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
	putchar('\n'); char b[10]; printf("是否删除该联系人(Y/N)");
	gets(b);
	if (strcmp(b, "y") == 0 || strcmp(b, "Y") == 0)
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
	}
	else if (strcmp(b, "n") == 0 || strcmp(b, "N") == 0)
		printf("取消删除!");
	else
		printf("输入错误!");
	return head;
}//删除链表函数 
void save_list(phone_book* head)
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
	phone_book* p1 = head;
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
phone_book* load_list(phone_book* head)
{
	FILE* fp;
	if ((fp = fopen("dianhuabu.dat", "rb")) == NULL)
	{
		printf("电话簿为空，请重新创建\n");
		exit(0);
	}phone_book* p1, * p2;
	p1 = (phone_book*)malloc(LEN);
	if (fread(p1, LEN, 1, fp) == 0)
	{
		printf("电话簿为空，请重新创建");
		return head;
	}
	head = p1;
	p2 = p1; p1 = (phone_book*)malloc(LEN);
	while (fread(p1, LEN, 1, fp))
	{
		p2->next = p1;
		p2 = p1;
		p1 = (phone_book*)malloc(LEN);
	}
	p2->next = NULL;
	free(p1);
	return(head);
	fclose(fp);
}//文件读取函数 
void menu()
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
	menu();//进入菜单界面  
	printf("          请选择你所需要的服务:");
	int n;
	scanf("%d", &n);
	getchar();
	phone_book* head;
	head = NULL;
	while (1)
	{
		system("cls");
		menu();
		switch (n)
		{
		case 1:
		{
			head = creat_list();
			system("cls");
			menu();
			print_list(head);
			save_list(head);
			printf("********************************************\n");
			printf("\n如需要其他服务，请重新输入:");
			scanf("%d", &n);   getchar(); }break;//创建电话簿（创建链表、写入文件,释放链表） 
		case 2:
		{
			head = load_list(head);
			find(head);
			printf("********************************************\n");
			printf("\n如需要其他服务，请重新输入:");
			scanf("%d", &n);   getchar(); }break;//查找联系人（读入文件、查找函数、释放链表） 
		case 3:
		{
			head = load_list(head);
			add_list(head);
			system("cls");
			menu();
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
			sort_list(head);
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