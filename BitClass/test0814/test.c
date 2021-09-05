#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
char* change(char* s) {
	int len = strlen(s);
	int i = 0;
	char* p = s;
	while (*p) {
		if (*p == ' ')
			i++;
		p++;
	}
	char* str = (char*)malloc((len + i) * sizeof(char));
	i = 0;
	while (*s) {
		if (*s == ' ') {
			str[i++] = '%';
			str[i++] = '2';
			str[i++] = '0';
			s++;
		}
		else
			str[i++] = *s++;
	}
	str[i] = 0;
	return str;
}
int main() {
	char s[] = "abc defgx yz";
	printf("%s", change(s));
	return 0;
}



