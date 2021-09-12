#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>


int romanToInt(char* s) {
    int sum = 0;
    while (*s == 'M') {
        sum += 1000;
        s++;
    }
    if (*s == 'C' && *(s + 1) == 'M') {
        sum = sum + 900;
        s += 2;
    }
    if (*s == 'D') {
        sum += 500;
        s++;
    }
    if (*s == 'C' && *(s + 1) == 'D') {
        sum += 400;
        s += 2;
    }
    while (*s == 'C') {
        sum += 100;
        s++;
    }
    if (*s == 'X' && *(s + 1) == 'C') {
        sum += 90;
        s += 2;
    }
    if (*s == 'L') {
        sum += 50;
        s++;
    }
    if (*s == 'X' && *(s + 1) == 'L') {
        sum += 40;
        s += 2;
    }
    while (*s == 'X') {
        sum += 10;
        s++;
    }
    if (*s == 'I' && *(s + 1) == 'X') {
        sum += 9;
        s += 2;
    }
    if (*s == 'V') {
        sum += 5;
        s++;
    }
    if (*s == 'I' && *(s + 1) == 'V') {
        sum += 4;
        s += 2;
    }
    while (*s == 'I') {
        sum += 1;
        s++;
    }
    return sum;
}

int main() {
    char s[] = "MMMXLV";
    printf("%d", romanToInt(s));
    return 0;
}
    