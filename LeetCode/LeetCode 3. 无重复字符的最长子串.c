#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<string.h>
//int lengthOfLongestSubstring(char* s) {
//    int max = 0,count = 0,p = 0;
//    while (*s) {
//        for (count = 1; count < strlen(s); count++) {
//            for (p = 0; p < count; p++) {
//                if (s[count] == s[p])
//                    break;
//            }
//            if (p != count)
//                break;
//        }
//        if (count > max)
//            max = count;
//        s++;
//    }
//
//    return max;
//}
int lengthOfLongestSubstring(char* s) {
    int max = 0, i = 0, j = 0;
    int arr[128] = { 0 };
    arr[0] = 1;
    while (s[i]) {
        while (arr[s[j] ]== 0) {
            arr[s[j]] = 1;
            j++;
        }
        max = max > (j - i) ? max : (j - i);
        if (s[j] == 0)
            break;
        while (s[i]!=s[j]) {
            arr[s[i]] = 0;
            i++;
        }
        arr[s[i]] = 0;
        i++;
    }
    return max;
}
int main() {
    char s[] = "abcac";
    printf("%d", lengthOfLongestSubstring(s));
    return 0;
}


