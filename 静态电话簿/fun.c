#include"book.h"



void InitContact(struct Contact* pc)
{
	pc->sz = 0;
	memset(pc->data, 0, MAX*sizeof(struct PeoInfo));
}



void AddContact(struct Contact* pc)
{
	struct PeoInfo tmp = { 0 };
	if (pc->sz == MAX) {
		printf("通讯录满了\n");
	}
	else {
		printf("请输入名字:>");
		scanf("%s", tmp.name);
		printf("请输入年龄:>");
		scanf("%d", &(tmp.age));
		printf("请输入性别:>");
		scanf("%s", tmp.sex);
		printf("请输入电话:>");
		scanf("%s", tmp.tele);
		printf("请输入地址:>");
		scanf("%s", tmp.addr);
		pc->data[pc->sz] = tmp;
		printf("添加成功\n");
		pc->sz++;
	}
}


void DestroyContact(struct Contact* pc){
	pc->sz = 0;
	memset(pc->data, 0, MAX * sizeof(struct PeoInfo));
}

void ShowContact(struct Contact* pc)
{
	int i = 0;
	printf("%15s\t%5s\t%8s\t%15s\t%30s\n\n",
		"name", "age", "sex", "tele", "addr");
	for (i = 0; i < pc->sz; i++)
	{
		//打印每一个数据
		printf("%15s\t%5d\t%8s\t%15s\t%30s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

int FindContactByName(const struct Contact* pc, const char* name)
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	//找不到了
	return -1;
}

void DelContact(struct Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("通讯录为空，无法删除\n");
		return;
	}
	char name[NAME_MAX] = { 0 };
	printf("请输入要删除人的名字：>");
	scanf("%s", name);
	//查找
	int pos = FindContactByName(pc, name);
	if (pos == -1)
	{
		printf("指定的联系人不存在\n");
	}
	else
	{
		//删除
		int j = 0;
		for (j = pos; j < pc->sz - 1; j++)
		{
			pc->data[j] = pc->data[j + 1];
		}
		pc->sz--;
		//
		printf("删除成功\n");
	}
}

void SearchContact(const struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("输入要查找人的名字:>");
	scanf("%s", name);
	int pos = FindContactByName(pc, name);
	if (-1 == pos)
	{
		printf("查无此人\n");
	}
	else
	{
		printf("%15s\t%5s\t%8s\t%15s\t%30s\n\n",
			"name", "age", "sex", "tele", "addr");
		printf("%15s\t%5d\t%8s\t%15s\t%30s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
	}
}

void ModifyContact(struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("输入要修改人的名字:>");
	scanf("%s", name);
	int pos = FindContactByName(pc, name);
	if (-1 == pos)
	{
		printf("要修改的人不存在\n");
	}
	else
	{
		printf("请输入新的名字:>");
		scanf("%s", pc->data[pos].name);
		printf("请输入新的年龄:>");
		scanf("%d", &(pc->data[pos].age));
		printf("请输入新的性别:>");
		scanf("%s", pc->data[pos].sex);
		printf("请输入新的电话:>");
		scanf("%s", pc->data[pos].tele);
		printf("请输入新的地址:>");
		scanf("%s", pc->data[pos].addr);
	}
}

void SortContact(struct Contact* pc) {
	qsort(pc->data, pc->sz, sizeof(struct PeoInfo), CmpByname);
	printf("排序完毕，请执行查看操作");
}

int CmpByname(const char* s1, const char* s2) {
	return strcmp(s1, s2);
}