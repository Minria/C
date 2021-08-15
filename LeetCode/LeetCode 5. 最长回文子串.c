#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int Palindrome(char* str) {
    int len = strlen(str);
    int left = 0, right = len - 1;
    while (left <= right) {
        if (str[left] != str[right]) {
            break;
        }
        else {
            left++;
            right--;
        }
    }
    if (left >= right) {
        return len;
    }
    else {
        return 0;
    }
}
char* longestPalindrome(char* s) {
    int n = strlen(s);
    if (n <= 1)
        return s;
    char* s1 = (char*)malloc(n * sizeof(char));
    int max = 0;
    int i = 0, j = 0;
    for (i = 0; i < n; i++) {
        for (j = n - 1; j >= i; j--) {
            if (s[j] == s[i]) {
                char temp = s[j + 1];
                s[j + 1] = 0;
                if (Palindrome(s + i) == j - i + 1) {
                    if (j - i + 1 > max) {
                        max = j - i + 1;
                        strcpy(s1, s + i);
                    }
                    s[j + 1] = temp;
                }
            }
        }
    }
    return s1;
}
int main() {
    char s[] = "bb";
    printf("%s", longestPalindrome(s));
    return 0;
}