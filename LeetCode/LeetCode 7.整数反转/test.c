#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
#define intmax pow(2,31)-1
#define intmin -pow(2,31)
int reverse(int x) {
	int sum = 0;
	while (x) {
		if ((sum * 10 + x % 10) > intmax)
			return intmax;
		else if ((sum * 10 + x % 10) < intmin)
			return intmin;
		else
			sum = sum * 10 + x % 10;
		x = x / 10;
	}
	return sum;
}
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
//
//}
int main() {
	int n = 5327153;
	printf("%d", reverse(n));
	return 0;
}