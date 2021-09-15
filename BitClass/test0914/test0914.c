// test0914.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//#include <iostream>
//
//int main()
//{
//    std::cout << "Hello World!\n";
//}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
//int main() {
//	char str1[10] = "abcd";
//	char str2[] = "efg";
//	strcat(str1, str2);
//	printf("%s", str1);
//	return 0;
//}

//int my_strcmp(const char* s1, const char* s2) {
//	while (*s1 == *s2) {
//		if (*s1 == 0) {
//			return 0;
//		}
//		++s1;
//		++s2;
//	}
//	return *s1 - *s2;
//}
//int main() {
//	char s1[] = "abcde";
//	char s2[] = "acdef";
//	printf("%d %d", my_strcmp(s1, s2), strcmp(s1, s2));
//	return 0;
//}

//int main() {
//	char str1[] = "abcdefg";
//	char str2[] = "cde";
//	char* ret = strstr(str1,str2);
//	printf("%s", ret);
//	return 0;
//}

int main(){
	char str[] = "- This, a sample string.";
	char* pch;
	printf("Splitting string \"%s\" into tokens:\n", str);
	pch = strtok(str, " ,.-");
	while (pch != NULL)
	{
		printf("%s\n", pch);
		pch = strtok(NULL, " ,.-");
	}
	return 0;
}