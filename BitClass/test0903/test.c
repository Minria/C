#include<stdio.h>
#include<string.h>
//int main() {
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//6
//	printf("%d\n", sizeof(arr + 0));//4/8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4/8
//	printf("%d\n", sizeof(&arr + 1));//4/8
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8
//	strlen函数输入地址，找到0为止
//	printf("%d\n", strlen(arr));//随机值b
//	printf("%d\n", strlen(arr + 0));//随机值b
//	printf("%d\n", strlen(*arr));//错误
//	printf("%d\n", strlen(arr[1]));//错误
//	printf("%d\n", strlen(&arr));//随机值b
//	printf("%d\n", strlen(&arr + 1));//随机值b-6
//	printf("%d\n", strlen(&arr[0] + 1));//随机值b-1
//	return 0;
//}



//int main() {
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//7
//	printf("%d\n", sizeof(arr + 0));//4/8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4/8
//	printf("%d\n", sizeof(&arr + 1));//4/8
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//错误
//	//printf("%d\n", strlen(arr[1]));//错误
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//随机
//	printf("%d\n", strlen(&arr[0] + 1));//5
//}


//int main() {
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));//4/8
//	printf("%d\n", sizeof(p + 1));//4/8
//	printf("%d\n", sizeof(*p));//1
//	printf("%d\n", sizeof(p[0]));//1
//	printf("%d\n", sizeof(&p));//4/8
//	printf("%d\n", sizeof(&p + 1));//4/8
//	printf("%d\n", sizeof(&p[0] + 1));//4/8
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));
//	//printf("%d\n", strlen(p[0]));
//	printf("%d\n", strlen(&p));//随机值a
//	printf("%d\n", strlen(&p + 1));//随机值b
//	printf("%d\n", strlen(&p[0] + 1));//5
//}



//a[i]==*(a+i)
//int main() {
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16
//	printf("%d\n", sizeof(a[0] + 1));//4/8
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	printf("%d\n", sizeof(a + 1));//4/8
//	printf("%d\n", sizeof(*(a + 1)));//16
//	printf("%d\n", sizeof(&a[0] + 1));//4/8
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16
//	printf("%d\n", sizeof(a[3]));//16
//}
