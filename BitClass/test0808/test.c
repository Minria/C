
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main() {
//	unsigned int a = -1;
//	unsigned int b = 0;
//	if (b > a)
//		printf("1");
//	else
//		printf("0");
//	return 0;
//}
// 
// 
// 
//void print(int a) {
//	if (a == 0)
//		return;
//	if (a & 1 == 1)
//		printf("1");
//	else
//		printf("0");
//	print(a >> 1);
//}
//int main() {
//	int a = 3435973836;
//	print(a);
//	return 0;
//}

//long long int fact(int n) {
//	if (n <= 1)
//		return 1;
//	int i = 0;
//	long long int sum = 1;
//	for (i = 1; i <= n; i++)
//		sum = sum * i;
//	return sum;
//}
//
//int main() {
//	int n = 0, i = 0,j=0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++) {
//		for (j = 0; j <= i; j++)
//			printf("%d ", fact(i) / (fact(j) * fact(i - j)));
//		printf("\n");
//	}
//	return 0;
//}

//void printarr(int arr[][30], int n) {
//	int i = 0,j = 0;
//	for (i = 0; i < n; i++) {
//		for (j = 0; j <= i; j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//}
//void setarr(int arr[][30], int n) {
//	int i = 0, j = 0;
//	for (i = 0; i < n; i++) {
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//	}
//	for (i = 1; i < n; i++) {
//		for (j = 1; j <= i; j++) {
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//}
//int main() {
//	int arr[30][30] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	setarr(arr, n);
//	printarr(arr, n);
//}



//int main() {
//	int arr[4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		arr[i] = 1;
//		if ((arr[0] != 1) + (arr[2] == 1) + (arr[3] == 1) + (arr[3] != 1) == 3)
//			break;
//		arr[i] = 0;
//	}
//	printf("%d", i+1);
//	return 0;
//}