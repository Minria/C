#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<assert.h>

//char* myStrcpy(char* s, const char* b) {
//	assert(s && b);
//	while (*s++ = *b++) {
//
//	}
//	*s++ = 0;
//}
//int main() {
//	char s[] = "abcdefg";
//	char b[] = "qwer";
//	myStrcpy(s, b);
//	printf("%s", s);
//	return 0;
//}

//int myStrlen(const char* s) {//不创建临时变量版
//	if (*s == 0)
//		return 0;
//	else
//		return myStrlen(++s) + 1;
//}
//int myStrlen(const char* s) {//指针相减版
//	char* p = s;
//	while (*p) {
//		++p;
//	}
//	return p - s;
//}
//int main() {
//	char s[] = "a";
//	printf("%d", myStrlen(s));
//	return 0;
//}
//int main() {
//	int a = -4;
//	printf("%x", a);
//	return 0;
//}