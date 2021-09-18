#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<assert.h>
int my_strcmp(const char* s1, const char* s2) {
	assert(s1 && s2);
	while (*s1 == *s2) {
		if (*s1 == 0)
			return 0;
		++s1;
		++s2;
	}
	return *s1 - *s2;
}
int main() {
	char s1[] = "abcdefadad";
	char s2[] = "abcdefg";
	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", my_strcmp(s1, s2));
	return 0;
}