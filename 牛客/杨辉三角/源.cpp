#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int fact(int n) {
    int sum = 1;
    if (n <= 1)
        return 1;
    else {
        for (int i = 1; i <= n; i++)
            sum = sum * i;
    }
    return sum;
}
int main() {
    int n = 0, i = 0, j = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%5d", fact(i) / (fact(j) * fact(i - j)));
        }
        printf("\n");
    }
    return 0;
}