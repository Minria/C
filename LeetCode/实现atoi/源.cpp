#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>
#include<string.h>
int myAtoi(char* s) {
    int size = strlen(s);
    int i = 0;
    char ch = '0';
    long long sum = 0;
    for (i = 0; i < size; i++) {
        //if (i > 0 && (*(s + i - 1) >= '0' && *(s + i - 1) <= '9') && (*(s + i) > '9' && *(s + i) < '0'))
        //    break;
        if ((*(s + i) >= 'a' && *(s + i) <= 'z') || (*(s + i) >= 'A' && *(s + i) <= 'Z') || *(s + i) == '.')
            break;
        if (*(s + i) == '-' || *(s + i) == '+')
            if (ch == '0')
                ch = *(s + i);
            else
                break;
        if (*(s + i) >= '0' && *(s + i) <= '9') {
            sum = sum * 10 + *(s + i) - 48;
            if (ch == '-' && sum > pow(2, 31))
                return -pow(2, 31);
            if (ch != '-' && sum > pow(2, 31) - 1)
                return pow(2, 31) - 1;
            if (*(s+i+1)==' ')
                break;

        }
        if (*(s + i) == ' ')
            continue;
    }
    return sum;
}
int main() {
    char s[] = "200000000000000000000";
    printf("%d", myAtoi(s));
    return 0;
}