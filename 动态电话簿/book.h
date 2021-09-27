#pragma once
#define _CRT_SECURE_NO_WARNINGS



#include <string.h>
#include <stdio.h>
#include <stdlib.h>


#define DEFAULT_SZ 3
#define NAME_MAX 30
#define SEX_MAX 5
#define TELE_MAX 15
#define ADDR_MAX 20
#define MAX 1000
//描述人的信息
struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};




struct Contact
{
	struct PeoInfo* data;
	int sz;//通讯录中当前有效元素的个数
	int capacity;//通讯录的当前最大容量
};




//初始化通讯录
void InitContact(struct Contact* pc);
//销毁通讯录
void DestroyContact(struct Contact* pc);

//增加联系人
void AddContact(struct Contact* pc);

//显示所有的联系人
void ShowContact(struct Contact* pc);

//删除指定联系人
void DelContact(struct Contact* pc);

//查找指定联系人
void SearchContact(const struct Contact* pc);

//修改指定联系人
void ModifyContact(struct Contact* pc);
