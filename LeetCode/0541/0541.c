#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
void reverseAll(char* s, int k) {
    int left = 0, right = k - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        ++left;
        --right;
    }

}
char* reverseStr(char* s, int k) {
    int len = strlen(s);
    int i = 0;
    for (i = 0; i < len; i += 2 * k) {
        int len1 = strlen(s + i);
        if (len1 >= k) {
            reverseAll(s + i, k);
        }
        else {
            reverseAll(s + i, len1);
        }
    }
    return s;
}
int main() {
    char s[] = "abcdefghij";
    reverseStr(s, 2);
    printf("%s", s);
    return 0;
}

//int returnMin(int a, int b) {
//    return a > b ? b : a;
//}
//void reverseAll(char* s, int left, int right) {
//    while (left < right) {
//        char temp = s[left];
//        s[left] = s[right];
//        s[right] = temp;
//        ++left;
//        --right;
//    }
//
//}
//char* reverseStr(char* s, int k) {
//    int len = strlen(s);
//    int i = 0;
//    for (i = 0; i < len; i += 2 * k)
//        reverseAll(s, i, returnMin(len - 1, i + k - 1));
//}