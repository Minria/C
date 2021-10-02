#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>


//int main() {
//	FILE* pf = fopen("data.txt", "r");
	//if (pf == NULL) {
	//	perror(fopen);
	//	return -1;
	//}
//	int a = 0;
//	float b = 0.0;
//	fscanf(pf, "%d %f", &a, &b);
//	printf("%d %f", a, b);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main() {
//	char str[6];
//	int arr[] = { 1,2,3,4,5 };
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL) {
//		perror(fopen);
//		return -1;
//	}
//	fread(str, 1, 1, pf);
//	fread(arr, 4, 5, pf);
//	printf(str);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//int main()
//{
//	char c[] = "This is runoob";
//	char buffer[20];
//	FILE* fp = fopen("data.txt", "r+");
//	fwrite(c, strlen(c) + 1, 1, fp);
//	rewind(fp);
//	fread(buffer, strlen(c) + 1, 1, fp);
//	printf("%s\n", buffer);
//	fclose(fp);
//	return(0);
//}

//int main() {
//	FILE* pf = fopen("data.txt", "r");
//	fseek(pf, 2, SEEK_SET);
//	printf("偏移量1：%d\n", ftell(pf));
//	int ch = fgetc(pf);
//	printf("偏移量2：%d\n", ftell(pf));
//	printf("%c\n", ch);
//	return 0;
//}


//struct tag{
//	member_list;
//}variable_list;


//struct Stu
//{
//	char name[20];//名字
//	int age;//年龄
//	char sex[5];//性别
//	char id[20];//学号
//};//分号不能丢

//struct Node{
//	int data;
//	struct Node* next;
//};


//struct Point{
//	int x;
//	int y;
//}p1; //声明类型的同时定义变量p1
//
//struct Point p2; //定义结构体变量p2
//
////初始化：定义变量的同时赋初值。
//struct Point p3 = { x, y };
//
//struct Stu {
//	char name[15];//名字
//	int age; //年龄
//};
//struct Stu s = { "zhangsan", 20 };//初始化
//
//struct Node{
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10, {4,5}, NULL }; //结构体嵌套初始化
//
//struct Node n2 = { 20, {5, 6}, NULL };//结构体嵌套初始化



//int main() {
//	struct S1{
//		char c1;
//		int i;
//		char c2;
//	};
//	printf("%d\n", sizeof(struct S1));
//	return 0;
//}

//int main() {
//	struct S2
//	{
//		char c1;
//		char c2;
//		int i;
//	};
//	printf("%d\n", sizeof(struct S2));
//	return 0;
//}

//int main() {
	//struct S3{
	//	double d;
	//	char c;
	//	int i;
	//};
//	printf("%d\n", sizeof(struct S3));
//	return 0;
//}

//int main() {
//	struct S3 {
//		double d;
//		char c;
//		int i;
//	};
//	struct S4
//	{
//		char c1;
//		struct S3 s3;
//		double d;
//	};
//	printf("%d\n", sizeof(struct S4));
//}

//struct S{
//	int data[1000];
//	int num;
//};
//struct S s = { {1,2,3,4}, 1000 };
////结构体传参
//void print1(struct S s){
//	printf("%d\n", s.num);
//}
////结构体地址传参
//void print2(struct S* ps){
//	printf("%d\n", ps->num);
//}
//int main(){
//	print1(s); //传结构体
//	print2(&s); //传地址
//	return 0;
//}