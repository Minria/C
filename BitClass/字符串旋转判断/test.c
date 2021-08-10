#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//左旋右旋都要考虑，旋转至少为1,应该不考虑大小写，全部转换小写,需要多次判断,不能修改字符串
void Change(char* str) {
	int size = strlen(str);
	int i = 0;
	for (i = 0; i < size; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}
}
void reverseAll(char* str, int left, int right) {
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
void reverseLeft(char* str, int k) {
	int size = strlen(str);
	reverseAll(str, 0, size - 1);
	reverseAll(str, 0, size - k - 1);
	reverseAll(str, size - k, size - 1);
}
void reverseRight(char* str, int k) {
	int size = strlen(str);
	reverseAll(str, 0, size - 1);
	reverseAll(str, 0, k-1);
	reverseAll(str, k, size - 1);

}
int Is(const char* s1, const char* s2) {
	int size1 = strlen(s1);
	int size2 = strlen(s2);
	if (size1 != size2) return 0;
	int k = 0;
	for(k=1;k<size2;k++){
		char str[20] = { 0 };
		strcpy(str, s2);
		reverseLeft(str, k);
		if (strcmp(str, s1) == 0) return 1;
		strcpy(str, s2);
		reverseRight(str, k);
		if (strcmp(str, s1) == 0) return 1;
	}
	return 0;
}
int main() {
	char s1[] = "abcdefg";
	char s2[] = "adalkff";
	Change(s1);
	Change(s2);//转换为小写
	printf("%d", Is(s1, s2));
	return 0;
}