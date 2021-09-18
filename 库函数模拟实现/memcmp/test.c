#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<assert.h>
int my_memcmp(void* str1, const void* str2, size_t n) {
	assert(str1 && str2);
	while (n--) {
		if (*((char*)str1) == *((char*)str2)) {
			str1 = (char*)str1 + 1;
			str2 = (char*)str2 + 1;
		}
		else
			return *((char*)str1) - *((char*)str2);
	}
	return 0;
}

int main() {
	int arr1[] = { 1,2,3,4,5,8 };
	int arr2[] = { 1,2,3,4,5,7 };
	printf("%d", my_memcmp(arr1, arr2, 21));
	return 0;
}