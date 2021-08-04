#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//void mystrcpy(char* str, char* str1) {
//	int len = strlen(str1);
//	int i = 0;
//	while (i <= len) {
//		*(str + i) = *(str1 + i);
//		i++;
//	}
//}
//int main() {
//	char str[20]="0";
//	char str1[20] = "abcdefg";
//	mystrcpy(str, str1);
//	printf("%s", str);
//	return 0;
//}

//size_t my_strlen(char* str) {
//	const char* p1 = str;
//	while (*str++) {
//		;
//	}
//	return(str - p1-1);
//}
//int main() {
//	char str[] = "abcdefg";
//	int ret = my_strlen(str);
//	printf("%d", ret);
//	return 0;
//}
#include<stdio.h>
char* MyStrcpy(char* patse, const char* copy) {
	char* p = patse;
	while (*p++ = *copy++);
	return patse;//p为临时创建的，函数结束就消失
}
int main() {
	char str1[] = "abcdef";
	char str2[10] = { 0 };
	char* ret = MyStrcpy(str2, str1);
	printf("%s", ret);
	return 0;
}