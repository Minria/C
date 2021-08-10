#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int price = 20;
	int n = price;//初始手里空瓶子数
	int count = n;//喝了多少汽水
	while (n>1) {
		int temp = count;
		count += n/2;
		n = count - temp + n % 2;
	}
	printf("%d", count);
	return 0;
}