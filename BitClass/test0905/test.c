#include<stdio.h>
//int main() {
//	int a = 1;
//	printf("%d", a);
//	return 0;
//}

//p[i]==*(p+i)
//p[i][j]==*(*(p+i)+j)
//int main() {
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//4¡Á12=48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//4¡Á4=16
//	printf("%d\n", sizeof(a[0] + 1));//&a[0][1],4»ò8
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	printf("%d\n", sizeof(a + 1));//4/8
//	printf("%d\n", sizeof(*(a + 1)));//16
//	printf("%d\n", sizeof(&a[0] + 1));//4/8
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16
//	return 0;
//}

