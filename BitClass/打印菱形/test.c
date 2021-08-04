#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
void print(int x) {
	int i;
	x = 7 - abs(7 - x);
	for (i = 0; i < 7 - x; i++)
		printf("  ");
	for (i = 1; i <=2*x-1; i++)
		printf("* ");
	printf("\n");
}
int main() {
	for (int i = 1; i <= 13; i++)
		print(i);
	return 0;
}