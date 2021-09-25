#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

//void test(){
//	int* p = (int*)malloc(INT_MAX*sizeof(int));
//	*p = 20;//如果p的值是NULL，就会有问题
//	free(p);
//}

//void test(){
//	int i = 0;
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (NULL == p){
//		exit(EXIT_FAILURE);
//	}
//	for (i = 0; i <= 10; i++){
//		*(p + i) = i;//当i是10的时候越界访问
//	}
//	free(p);
//}

//void test(){
//	int a = 10;
//	int* p = &a;
//	free(p);//ok?
//}
//void test() {
//	int* p = (int*)malloc(100);
//	p++;
//	free(p);//p不再指向动态内存的起始位置
//}
//void test(){
//	int* p = (int*)malloc(100);
//	free(p);
//	free(p);//重复释放
//}


//void test(){
//	int* p = (int*)malloc(100);
//	if (NULL != p){
//		*p = 20;
//	}
//}
//int main(){
//	test();
//	while (1);
//}
//int main() {
//	test();
//	return 0;
//}


//int main() {
//	char s[] = "abcdef";
//	printf(s);
//	return 0;
//}


//void GetMemory(char** p){
//	*p = (char*)malloc(100);
//}
//void Test(){
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main() {
//	Test();
//	return 0;
//}


//char* GetMemory(void){
//	char p[] = "hello world";
//	return p;
//}
//void Test(void){
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main() {
//	Test();
//	return 0;
//}

//void GetMemory(char** p, int num){
//	*p = (char*)malloc(num);
//}
//void Test(void){
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//int main() {
//	Test();
//	return 0;
//}

//void Test(void){
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL){
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main() {
//	Test();
//	return 0;
//}

//void change(int a) {
//	a = a + 1;
//}
//int main() {
//	int a = 0;
//	change(a);
//	return 0;
//}