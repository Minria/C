#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int lengthOfLongestSubstring(char* s) {
    int max = 0,count = 0,p = 0;
    while (*s) {
        for (count = 1; count < strlen(s); count++) {
            for (p = 0; p < count; p++) {
                if (s[count] == s[p])
                    break;
            }
            if (p != count)
                break;
        }
        if (count > max)
            max = count;
        s++;
    }

    return max;
}
int main() {
    char s[] = "bb";
    printf("%d", lengthOfLongestSubstring(s));
    return 0;
}


