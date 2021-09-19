#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

int strStr(char* haystack, char* needle) {
    int n = strlen(haystack);
    int m = strlen(needle);
    for (int i = 0; i + m <= n; i++) {
        int flag = 1;
        for (int j = 0; j < m; j++) {
            if (haystack[i + j] != needle[j]) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            return i;
        }
    }
    return -1;
}
int main() {
    char str1[] = "abcdefghj";
    char str2[] = "def";
    printf("%d", strStr(str1, str2));
    return 0;
}