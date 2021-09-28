#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>


//int main() {
//	FILE* pf = fopen("data.txt", "w+");
//	fgets("fopen abcdefg", pf);
//	fputs(pf);
//	fclose(pf);
//	return 0;
//}


//int main() {
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL) {
//		perror(fopen);
//		return -1;
//	}
//	fputc('a', pf);
//	fgetc(pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//void CheckCapacity(struct Contact* pc)
//{
//	if (pc->sz == pc->capacity)
//	{
//		//增加容量
//		struct PeoInfo* ptr = (struct PeoInfo*)realloc(pc->data, (pc->capacity + 2) * sizeof(struct PeoInfo));
//		if (ptr != NULL)
//		{
//			pc->data = ptr;
//			pc->capacity += 2;
//
//			printf("增容成功\n");
//		}
//		else
//		{
//			perror("通讯录增容失败");
//			exit(1);
//		}
//	}
//}

//void LoadContact(struct Contact* pc)
//{
//	//打开文件
//	FILE* pf = fopen("contact.txt", "rb");
//	if (NULL == pf)
//	{
//		perror("LoadContact::fopen");
//		return;
//	}
//	//读文件
//	struct PeoInfo tmp = { 0 };
//	while (fread(&tmp, sizeof(struct PeoInfo), 1, pf))
//	{
//		//空间如果不够的话，得增加空间
//		CheckCapacity(pc);
//
//		pc->data[pc->sz] = tmp;
//		pc->sz++;
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//}
//
////动态的版本
//void InitContact(struct Contact* pc)
//{
//	pc->sz = 0;
//	pc->data = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
//	pc->capacity = DEFAULT_SZ;//3
//
//	//加载文件信息到通讯录中
//	LoadContact(pc);
//}


//int main() {
//	FILE* pf = fopen("data.txt", "r+");
//	if (pf == NULL) {
//		perror(fopen);
//		return -1;
//	}
//	//fputc('e', pf);
//	//int ch = fgetc(pf);
//	//printf("%c", ch);
//
//	//fputs("abcdefgh", pf);
//	//char* arr[20] = { 0 };
//	//fgets(arr,5,pf);
//	//printf("%s", arr);
//	fclose(pf);
//	return 0;
//}

void write() {
	FILE* pf = fopen("data.txt", "w");
	if (pf == NULL) {
		perror(fopen);
		return;
	}
	fputc('a', pf);
	fputc('b', pf);
	fputc('c', pf);
	fclose(pf);
	pf = NULL;
}
void read() {
	FILE* pf = fopen("data.txt", "r");
	if (pf == NULL) {
		perror(fopen);
		return;
	}
	printf("%c\n",fgetc(pf));
	printf("%c\n", fgetc(pf));
	printf("%c\n", fgetc(pf));
	fclose(pf);
	pf = NULL;
}
int main() {
	write();
	read();
	return 0;
}