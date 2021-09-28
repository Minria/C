#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

int myStrncmp(const char* s1, const char* s2, size_t n) {
	if (n == 0)
		return 0;
	size_t i = 0;
	while (*(s1 + i) && *(s2 + i)&&i<n-1) {
		if (*(s1 + i) != *(s2 + i))
			break;
		++i;
	}
	return *(s1 + i) - *(s2 + i);
}
int main() {
	char s1[] = "accdewda";
	char s2[] = "abcde";
	printf("%d", myStrncmp(s1, s2, 2));
	return 0;
}