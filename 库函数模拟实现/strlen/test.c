#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
size_t my_strlen_1(char* s) {
	size_t count = 0;
	while (*s++) {
		++count;
	}
	return count;
}
size_t my_strlen_2(char*s){
	if (*s == 0)
		return 0;
	else
		return 1 + my_strlen_2(++s);
}
size_t my_strlen_3(char* s) {
	char* p = s;
	while (*p++) {

	}
	return p - s-1;
}
int main() {
	char str[] = "abcdefg";
	printf("%d\n", strlen(str));
	printf("%d\n", my_strlen_1(str));
	printf("%d\n", my_strlen_2(str));
	printf("%d\n", my_strlen_3(str));
	return 0;
}