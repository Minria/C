#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

int mySqrt(int x) {
	int left = 0, right = x;
	int ans = 0;
	while (left <= right) {
		int mid = (left + right) / 2;
		if ((long long)mid * mid <= x) {
			ans = mid;
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	return ans;
}
int main() {
	int x = 213146;
	printf("%d\n", mySqrt(x));
	printf("%d", (int)sqrt(x));
	return 0;
}