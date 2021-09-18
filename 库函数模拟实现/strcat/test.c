#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<assert.h>
char* my_strcat(char* dest, const char* src) {
	assert(dest && src);
	char* p = dest;
	while (*dest) {
		++dest;
	}
	while ((*dest++ = *src++)) {
		;
	}
	return p;
}
int main() {
	char s1[10] = "abc";
	char s2[] = "defg";
	printf("%s\n", s1);
	printf("%s", my_strcat(s1, s2));
	return 0;
}