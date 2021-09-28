#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<assert.h>

char* my_strcat(char* dest, const char* src,size_t n) {
	assert(dest && src);
	char* p = dest;
	size_t i = 0;
	while (*dest) {
		++dest;
	}
	while (i<n&&*src) {
		*dest++=*src++;
		++i;
	}
	*dest = '\0';
	return p;
}

int main() {
	char s1[10] = "abcd";
	char s2[] = "ef";
	my_strcat(s1, s2, 1);
	printf(s1);
	return 0;
}