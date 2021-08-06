#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int count_diff_bit(int n1, int n2) {
//	int n = n1 ^ n2;
//	int count = 0;
//	while (n) {
//		if ((n & 1) == 1)
//			count++;
//		n = n >> 1;
//	}
//	return count;
//}
//int main() {
//	int n1, n2;
//	scanf("%d %d", &n1, & n2);
//	printf("%d", count_diff_bit(n1, n2));
//	return 0;
//}


//int main() {
//	char ch = 0;
//	char str[10] ="aeiouAEIOU";
//	while ((ch = getchar()) != -1) {
//		int flag = 0;
//		int i = 0;
//		for (i = 0; i < 10; i++) {
//			if (ch == str[i]) {
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("1\n");
//		else
//			printf("0\n");
//		getchar();
//	}
//	return 0;
//}