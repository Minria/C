#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//涉及调换可以优先考虑双指针
//ABCD->DCBA->CD AB
// ABCD->DCBA->BCD A
//全部反转->反转后k个->反转前面的;
void reverse2(char* str, int left, int right);
void reverse1(char* str,int k) {
	int size = strlen(str);
	reverse2(str, 0, size - 1);
	reverse2(str, 0, size - k-1);
	reverse2(str, size - k, size - 1);
}
void reverse2(char* str, int left, int right) {
	if (left > right)
		return;
	while (left <= right) {
		char temp = *(str + left);
		*(str + left) = *(str + right);
		*(str + right) = temp;
		left++;
		right--;
	}
}
int main() {
	char str[10] ="abcdefg";
	int k = 3;
	reverse1(str, k);
	printf("%s", str);
	return 0;
}