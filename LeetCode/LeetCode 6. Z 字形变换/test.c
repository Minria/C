#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<malloc.h>

char* convert(char* s, int numRows) {
    int len = strlen(s);
    char* str = (char*)malloc(len * sizeof(char));
    char str[20] = { 0 };
    int k = 0;
    int i = 0, j = 0;
    for (i = 0; i < numRows; i++) {
        for (j = i; j < len; j += 2*numRows-2) {
            if (i > 0 && i < numRows - 1) {
                if (j > i) {
                    str[k++] = s[j - i*2];
                }
            }
            str[k++] = s[j];
        }
    }
    str[k] = 0;
    return str;
}
int main() {
    char s[] = "PAYPALISHIRING";
    printf("%s", convert(s, 3));
    return 0;
}