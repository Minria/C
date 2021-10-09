#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

//#define ADD(X) (X)*(X)
//int main() {
//	int a = 5;
//	int ret1 = ADD(a);
//	int ret2 = ADD(a + 1);
//	printf("%d %d", ret1, ret2);
//	return 0;
//}

//#define ADD(X) ((X)+(X))
//int main() {
//	int a = 5;
//	printf("%d", 2 * ADD(a));
//	return 0;
//}

//int main() {
//	char* p = "hello ""world";
//	printf(p);
//	return 0;
//}


//#define PRINT(a) printf("the value of "#a" is %d\n", a)
//int main() {
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	PRINT(a);
//	PRINT(b);
//	PRINT(c);
//	return 0;
//}
//
//#define ADDTOSUM(X,Y) X##Y
//int main() {
//	printf("%d", ADDTOSUM(1, 2));
//	return 0;
//}


#include <stdio.h>

//
//int  main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

int main() {
	int a = printf("%d", 432);
	int b = printf("abcdef");
	printf("%d %d", a, b);
	return 0;
}