#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<malloc.h>

int main() {
	int* data = (int*)malloc(3 * sizeof(int));
	if (data == NULL) {
		return -1;
	}
	data[0] = 1;
	data[1] = 2;
	data[2] = 3;
	int* pf = (int*)realloc(data, 4 * sizeof(int));
	if (pf == NULL)
		return -1;
	else
		data = pf;
	data[3] = 4;
	printf("%d %d %d %d", data[0], data[1], data[2],data[3]);
	free(data);
	return 0;
}