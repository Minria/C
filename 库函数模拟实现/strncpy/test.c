#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<assert.h>

char* myStrncpy(char* dest, const char* src, size_t n) {
	assert(dest && src);
	size_t i = 0;
	while (*(src + i) && i < n) {
		*(dest + i) = *(src + i);
		++i;
	}
	*(dest + i) = '\0';
	return dest;
}
int main() {
	char s1[10] = "abcdefgh";
	char s2[] = "1234";
	myStrncpy(s1, s2, 3);
	printf(s1);
	return 0;
}