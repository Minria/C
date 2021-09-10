#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>


//sizeof(地址)的值是4或8，取决于32位还是64位平台

//int main() {
//	//一维数组
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16,一般数组名代表地址，这是一个特殊情况，sizeof+数组名代表整个数组
//	printf("%d\n", sizeof(a + 0));//4或8，这代表首元素地址
//	printf("%d\n", sizeof(*a));//首元素所占字节大小4
//	printf("%d\n", sizeof(a + 1));//4或8
//	printf("%d\n", sizeof(a[1]));//4
//	printf("%d\n", sizeof(&a));//4或8
//	printf("%d\n", sizeof(*&a));//16
//	printf("%d\n", sizeof(&a + 1));//4或8
//	printf("%d\n", sizeof(&a[0]));//4或8
//	printf("%d\n", sizeof(&a[0] + 1));//4或8
//	return 0;
//}



//int main() {
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//6
//	printf("%d\n", sizeof(arr + 0));//4或8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4或8
//	printf("%d\n", sizeof(&arr + 1));//4或8
//	printf("%d\n", sizeof(&arr[0] + 1));//4或8
// 
//	//strlen接受字符串的地址，然后往后往后找到'\0'位置
// 
//	printf("%d\n", strlen(arr));//没有给'\0'所以长度位置，设为a
//	printf("%d\n", strlen(arr + 0));//a
//	printf("%d\n", strlen(*arr));//错误
//	printf("%d\n", strlen(arr[1]));//错误
//	printf("%d\n", strlen(&arr));//a
//	printf("%d\n", strlen(&arr + 1));//a-6
//	printf("%d\n", strlen(&arr[0] + 1));//a-1
//  return 0;
//}



//int main() {
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//7，这里不是6，后面还有一个0没有表示出来
//	printf("%d\n", sizeof(arr + 0));//4或8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4或者8
//	printf("%d\n", sizeof(&arr + 1));//4或者8
//	printf("%d\n", sizeof(&arr[0] + 1));//4或者8
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	printf("%d\n", strlen(*arr));//错误
//	printf("%d\n", strlen(arr[1]));//错误
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//未知
//	printf("%d\n", strlen(&arr[0] + 1));//5
//	return 0;
//}

//int main() {
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));//4or8
//	printf("%d\n", sizeof(p + 1));//4or8
//	printf("%d\n", sizeof(*p));//a
//	printf("%d\n", sizeof(p[0]));//a
//	printf("%d\n", sizeof(&p));//4or8
//	printf("%d\n", sizeof(&p + 1));//4or8
//	printf("%d\n", sizeof(&p[0] + 1));//4or8
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//error
//	//printf("%d\n", strlen(p[0]));//error
//	printf("%d\n", strlen(&p));//未知，设为a
//	printf("%d\n", strlen(&p + 1));//
//	printf("%d\n", strlen(&p[0] + 1));//5
//	return 0;
//}


//int main() {
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//4×12=48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//4×4=16
//	printf("%d\n", sizeof(a[0] + 1));//4or8
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	printf("%d\n", sizeof(a + 1));//4or8
//	printf("%d\n", sizeof(*(a + 1)));//16
//	printf("%d\n", sizeof(&a[0] + 1));//4or8
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16
//	printf("%d\n", sizeof(a[3]));//16
//	return 0;
//}



//int main(){
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr- 1));
//	return 0;
//}
//元素名代表首元素地址，a+1代表第二个元素地址，解引用得到第二个元素的值
//&a+1跳过整个元素，它的类型是int (*)[5]，这里强制类型转换为int*，&a+1代表跳过整个元素，指向a[5]（不存在）

//struct Test{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
//int main(){
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}

int main(){
	int a[4] = { 1, 2, 3, 4 };
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	printf("%x,%x", ptr1[-1], *ptr2);
	return 0;
}
//第一个不在说明
//第二个要考虑大小端问题



//int main(){
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int* p;
//	p = a[0];//p指向数组第一行
//	printf("%d", p[0]);//第一行第一个
//	return 0;
//}
//里面涉及逗号表达式，数组位a[3][2]={1,3,5}
//第一行第一杠元素是1


//int main(){
//	int a[5][5];
//	int(*p)[4];//这个一个指针，指向有四个元素的数组
//	p = a;//a有五个元素，强行将p指向a，下面有警告
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}
//a中元素1 2 3 4 5/ 6 7 8 9 10/ 11 12 13 14 15/ 16 17 18 19 20/ 21 22 23 24 25
//p☞元素1 2 3 4/ 5 6 7 8/ 9 10 11 12/ 13 14 15 16// 17 18 19 20 /
//我们知道a[4][2]元素是23，而p[4][2]是19，他们中间差了4个元素



//int main(){
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}



//int main(){
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}
//指针数组，数组里面存放的是指针
//pa指向数组第一个元素，自增运算后指向第二个元素
//解引用就是第二个指针



//int main(){
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//point
//	printf("%s\n", *-- * ++cpp + 3);//er
//	printf("%s\n", *cpp[-2] + 3);//st
//	printf("%s\n", cpp[-1][-1] + 1);//ew
//	return 0;
//}

//char* c[]是一个指针数组，里面存放的是指针
//char** cp[]是一个指针数组，里面存放的是上一个指针的地址
//char*** cpp指向cp数组第一个元素
//自增运算会改变指针的指向位置，从而会对后面的结果造成影响
//++优先级别高，cpp指向cp数组第二个元素，解引用一次得到c+2的值，在解引用得到POINT的指针地址
//++运算后指向cp第三个元素，解引用得到c+1，自检运算后得到c，此时cp[]={c+3,c+2,c,c},解引用得到ENTER指针地址，+3指向E
//*cpp[-2]等价于*(*(cpp-2));cpp-2指向c+3，解引用得到c+3空间，再次解引用得到FIRST指针地址
//等价于*(*(cpp-1)-1),cpp-1指向c+2，解引用猴得到c+2空间，减去1变成c+1，解引用得到NEW指针地址