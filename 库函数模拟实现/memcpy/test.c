#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

void* my_memcpy(void* str1, const void* str2, size_t n) {
	void* p = str1;
	while (n--) {
		*((char*)str1 + n) = *((char*)str2 + n);
	}
	return p;
}
int main() {
	char str1[] = "abcdefg";
	my_memcpy(str1, str1 + 4, 2);
	printf("%s", str1);
	return 0;
}