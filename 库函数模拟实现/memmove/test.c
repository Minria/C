#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<assert.h>

void* my_memmove(void* dest, const void* src, size_t count) {
	assert(dest && src);
	char* p = dest;
	if (dest >= src && (char*)dest <= (char*)src + count) {
		while (count--) {
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	else {
		while (count--) {
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	return p;
}

int main() {
	int arr[] = { 1,2,3,4,5,6,7,8 };
	int numsSize = sizeof(arr) / sizeof(arr[0]);
	my_memmove(arr+1, arr, 12);
	for (int i = 0; i < numsSize; i++)
		printf("%d ", arr[i]);
	return 0;
}