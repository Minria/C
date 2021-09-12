#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<malloc.h>

char* addBinary(char* a, char* b) {
    int len1 = strlen(a);
    int len2 = strlen(b);
    int max = len1 > len2 ? len1 : len2;
    char* s = (char*)malloc(max + 2);
    s[max + 1] = 0;
    int p1 = len1 - 1, p2 = len2 - 1, p3 = max;
    int temp1 = 0, temp2 = 0;
    while (p1 >= 0 && p2 >= 0) {
        temp1 = a[p1--] - 48 + b[p2--] - 48 + temp2;
        temp2 = 0;
        if (temp1 > 1) {
            temp2 = 1;
            temp1 -= 2;
        }
        s[p3--] = temp1 + 48;
    }
    while (p1 >= 0) {
        temp1 = a[p1--] - 48 + temp2;
        temp2 = 0;
        if (temp1 > 1) {
            temp2 = 1;
            temp1 -= 2;
        }
        s[p3--] = temp1 + 48;
    }
    while (p2 >= 0) {
        temp1 = b[p2--] - 48 + temp2;
        temp2 = 0;
        if (temp1 > 1) {
            temp2 = 1;
            temp1 -= 2;
        }
        s[p3--] = temp1 + 48;
    }
    if (temp2 == 1) {
        s[0] = '1';
        return s;
    }
    else
        return s + 1;
}

int main() {
    char a[] = "1";
    char b[] = "111";
    printf("%s", addBinary(a, b));
    return 0;
}