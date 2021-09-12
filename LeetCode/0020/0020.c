#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<malloc.h>
#include<stdbool.h>


int isValid(char* s) {
    int len = strlen(s);
    if (len % 2 != 0)  return -1;
    char* str = (char*)malloc(len / 2+1);
    memset(str, ' ', len / 2 + 1);
    int a = -1, i = 0;
    for (i = 0; i < len; ++i) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            ++a;
            str[a] = s[i];
            if (a == len / 2) return -1;
        }
        else {
            if (s[i] == ')' && str[a] == '(') {
                --a;
            }
            else if (s[i] == '}' && str[a] == '{') {
                --a;
            }
            else if (s[i] == ']' && str[a] == '[') {
                --a;
            }
            else
                return -1;
        }
    }
    return 1;
}

int main() {
    char s[] = "){";
    printf("%d", isValid(s));
    return 0;
}