#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a = 5;
	if (a = 0)
		printf("%d", a - 10);
	else
		printf("%d", a++);
	return 0;
}
// 
// 
//int main() {
//	int PreNum = 0, NowNum = 1,NextNum=1;
//	int n = 0;
//	scanf("%d", &n);
//	if (n == 1)
//		NowNum = 0;
//	if (n == 2)
//		NowNum = 1;
//	while (n-2) {
//		NextNum = NowNum + PreNum;
//		PreNum = NowNum;
//		NowNum = NextNum;
//		n--;
//	}
//	printf("%d", NowNum);
//	return 0;
//}