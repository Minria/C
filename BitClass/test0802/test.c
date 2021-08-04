#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#define MAX 5
//int main() {
//    float values[MAX];
//    float* vp;
//    for (vp = &values[0]; vp < &values[MAX];) {
//        *vp++ = 0;
//    }
//    for (vp = &values[0]; vp < &values[MAX]; vp++)
//        printf("%d ", *vp);
//    return 0;
//}


//#include<stdio.h>
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	printf("%d", &arr[9] - &arr[0]);
//	return 0;
//}
//#include<stdio.h>
//int my_strlen(char* str) {
//	char* p1 = str;
//	while (*p1 != '\0')
//		p1++;
//	return p1 - str;
//}
//int main() {
//	char str[] = "abcdefg";
//	printf("%d", my_strlen(str));
//	return 0;
//}


//int main() {
//	int a = 10;
//	int* p1 = &a;//以及指针
//	int** p2 = &p1;//二级指针，因为一级指针也有地址，理论上可以无线套娃
//}
//#include<stdio.h>
//int main() {
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };
//	for (int i = 0;i < 3; i++)
//		printf("%d ", *(arr[i]));
//	return 0;
//}
//struct Book {
//	char name[20];
//	char author[20];
//	float price;
//}bookMessage;

//typedef struct Stu {
//	int a;
//	int b;
//	int c;
//}Stu;
//int main() {
//	Stu s1;
//	return 0;
//}

//#include<stdio.h>
//#include<stdio.h>
//typedef struct Stu {
//	int nums;
//	char name[20];
//}q1;
//void print(q1* ps)
//{
//	printf("%d %s\n", ps->nums,ps->name);
//}
//int main() {
//	//q1 q2= { 10001,"abcdef" };
//	q1 q2;
//	q2.nums = 10001;
//	//gets(q2.name);
//	//strcpy(q2.name, "abcdefg");
//	//scanf("%d %s", &q2.nums, q2.name);
//	print(&q2);
//	return 0;
//}


