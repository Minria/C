#define _CRT_SECURE_NO_WARNINGS



#include<stdio.h>
//int main() {
//	int a = 1;
//	char *p=(char*)&a;
//	printf("%d", *p);
//	return 0;
//}


//int main() {
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}

//int main() {
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d", i + j);
//	return 0;
//}

//int main() {
//	int a = 0x00000001;
//	char* p = (char*)&a;
//	if (*p == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}

//int main() {
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 0)
//		printf("da端\n");
//	else
//		printf("xiao端\n");
//	return 0;
//}

//int main() {
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d %d %d", a, b, c);
//	return 0;
//}


//int mian() {
//	unsigned int i = 0;
//	for (i = 9; i >= 0; i--)
//		printf("%d\n", i);
//	return 0;
//}

//int main() {
//	char arr[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//		arr[i] = -1 - i;
//	int a = strlen(arr);
//	printf("%d", a);
//	return 0;
//}


//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}