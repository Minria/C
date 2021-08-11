#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//void test(int arr[]){
//}
//void test(int arr[10]){
//}
//void test(int* arr){
//}
//void test2(int* arr[20]){
//}
//void test2(int** arr){
//}
//int main(){
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}
//void test(int arr[3][5]){
//}
//void test(int arr[][5]){
//}//行列都可以写，但只能省略行，列不可以省略
//void test(int* arr){
//}
//void test(int* arr[5]){
//}
//void test(int(*arr)[5]){
//}
//void test(int** arr){
//}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}

//#include <stdio.h>
//void print(int* p, int sz){
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", *(p + i));
//}
//int main(){
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);//一级指针p传参到函数print
//	return 0;
//}


//#include <stdio.h>
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}
//#include <stdio.h>
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	return 0;
//}


//int add(int x, int y) {
//	return x + y;
//}

