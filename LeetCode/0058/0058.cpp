#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

int lengthOfLastWord(char* s) {
    int len = strlen(s);
    int i = len - 1;
    int num = 0;
    while (*(s + i) == ' ') {
        --i;
    }
    while (*(s + i) != ' ' && i >= 0) {
        --i;
        ++num;
    }
    return num;
}
int main() {
    char s[] = " a";
    printf("%d", lengthOfLastWord(s));
}