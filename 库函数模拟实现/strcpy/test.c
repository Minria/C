#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* src) {
	assert(dest&&src);
	char* p = dest;
	while (*dest++ = *src++) {

	}
	return p;
}
int main() {
	char s1[10] = "abc";
	char s2[] = "abcde";
	printf("%s\n",my_strcpy(s1, s2));
	printf("%s\n", s1);
	return 0;
}