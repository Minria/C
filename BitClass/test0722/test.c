#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a = 100;//全局变量
int main() {
	int a = 10;//局部变量
	printf("%d", a);
	return 0;
}