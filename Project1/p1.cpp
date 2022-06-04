namespace N
{
	int a = 10;
	int b = 20;
	int add(int left, int right) {
		return left + right;
	}
}
#include<stdio.h>
using N::b;
int main() {
	printf("%d\n", N::a);
	printf("%d\n", b);
	return 0;
}
