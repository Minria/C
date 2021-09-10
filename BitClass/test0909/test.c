#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
//int main() {
//	int a = -4;
//	printf("%d", a);
//	return 0;
//}

//size_t strlen(const char* str) {
//
//}
//int main() {
//	unsigned int sz = strlen("abcdefg");
//	return 0;
//}

char* MyStrcpy(char* p, const char* c) {
	assert(p);
	assert(c);
	if (strlen(p) < strlen(c))
		return;
	while (*c)
		*p++ = *c++;
	*p = 0;
}
int main() {
	char p[] = "abcdefg";
	char c[] = "qwer";
	MyStrcpy(p, c);
	printf("%s", p);
	return 0;
}