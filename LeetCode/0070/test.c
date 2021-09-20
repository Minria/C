#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

int climbStairs(int n) {
    int predata = 1;
    int nowdata = 2;
    int nextdata = 0;
    if (n == 1) {
        return 1;
    }
    else {
        while (n - 2) {
            nextdata = nowdata + predata;
            predata = nowdata;
            nowdata = nextdata;
            --n;
        }
    }
    return nowdata;
}
int main() {
    int n = 5;
    printf("%d", climbStairs(n));
    return 0;
}