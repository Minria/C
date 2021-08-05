#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int climbStairs(int n) {
    if (n < 0) {
        return;
    }
    if (n >= 0 && n <= 2) {
        return n;
    }
    if (n >= 3) {
        return climbStairs(n - 1) + climbStairs(n - 2);
    }
}
int main() {
    int n = 0;
    scanf("%d", &n);
    printf("%d", climbStairs(n));
    return 0;
}