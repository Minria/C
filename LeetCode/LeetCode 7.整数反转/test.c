#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
//int reverse(int x) {
//	long long int sum = 0;
//	while (x != 0) {
//		sum = sum * 10 + x % 10;
//		x = x / 10;
//	}
//	if (sum > pow(2, 31) - 1 || sum < -pow(2, 31))
//		return 0;
//	else
//		return sum;
//}
#include<Windows.h>
int reverse(int x) {
	int sum = 0;
	while (x != 0) {
        if (sum < INT_MIN / 10 || sum > INT_MAX / 10) {
            return 0;
        }
		sum = sum * 10 + x % 10;
		x = x / 10;
	}
	return sum;
}

int main() {
	int n = 12345;
	printf("%d", reverse(n));
	return 0;
}