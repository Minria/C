#define _CRT_SECURE_NO_WARNINGS
/*
思路：
1. 先将m和n进行按位异或，此时m和n相同的二进制比特位清零，不同的二进制比特位为1
2. 统计异或完成后结果的二进制比特位中有多少个1即可
*/

//#include <stdio.h>
//int calc_diff_bit(int m, int n)
//{
//	int tmp = m ^ n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int m, n;
//	while (scanf("%d %d", &m, &n) == 2)
//	{
//		printf("%d\n", calc_diff_bit(m, n));
//	}
//	return 0;
//}
 
 
 
 
 
 
 
 
//#include <stdio.h>
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	printf("%d\n",num1 & num2);
//	printf("%d\n",num1 | num2);
//	printf("%d\n",num1 ^ num2);
//	return 0;
//}


//#include<stdio.h>
//int main() {
//	int a = 10;
//	int b = 20;
//	int temp = a ^ b;
//	printf("%d", temp);
//	return 0;
//}