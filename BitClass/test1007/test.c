#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

#include <stdio.h>
//int main() {
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		int j = 0;
//		for (j = 0; j < 4; j++) {
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}

//int main() {
//    printf("%d", printf("%d", printf("%d", 43)));
//    //结果是啥？
//    return 0;
//}

//int main(){
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    const char* str3 = "hello bit.";
//    const char* str4 = "hello bit.";
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//    return 0;
//}

//int main() {
//	struct S1 {
//		char c1;
//		int i;
//		char c2;
//	};
//	printf("%d\n", sizeof(struct S1));
//	return 0;
//}
//
//int main() {
//	struct S2
//	{
//		char c1;
//		char c2;
//		int i;
//	};
//	printf("%d\n", sizeof(struct S2));
//	return 0;
//}


//int main() {
//	struct S3 {
//		double d;
//		char c;
//		int i;
//	};
//	printf("%d\n", sizeof(struct S3));
//	return 0;
//}


//int main() {
//	struct S3 {
//		double d;
//		char c;
//		int i;
//	};
//	struct S4
//	{
//		char c1;
//		struct S3 s3;
//		double d;
//	};
//	printf("%d\n", sizeof(struct S4));
//}


//int main() {
//    union Un1 {
//        char c[5];
//        int i;
//    };
//    union Un2 {
//        short c[7];
//        int i;
//    };	//下面输出的结果是什么？
//    printf("%d\n", sizeof(union Un1));
//    printf("%d\n", sizeof(union Un2));
//    return 0;
//}