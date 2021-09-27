#include"book.h"

void menu()
{
	printf("******************************\n");
	printf("****  1. add     2. del  *****\n");
	printf("****  3. search  4. modify****\n");
	printf("****  5. show    6. sort   ***\n");
	printf("****  0. exit               **\n");
	printf("******************************\n");
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

int main()
{
	int input = 0;
	//创建一个通讯录
	struct Contact con;
	//初始化通讯录
	InitContact(&con);
	//最多可以放3个人的信息了
	//空间不够可以增容

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case EXIT:
			//销毁通讯录
			DestroyContact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}