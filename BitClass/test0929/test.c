#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>


//int main() {
//	FILE* pf = fopen("E:\\data.txt", "r");
//	if (pf == NULL) {
//		perror(fopen);
//		return -1;
//	}
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	return 0;
//}

//int main() {
//	FILE* pf = fopen("E:\\data.txt", "w");
//	if (pf == NULL) {
//		perror(fopen);
//		return -1;
//	}
//	fputc('e', pf);
//	fputc('f', pf);
//	return 0;
//}

//int main() {
//	FILE* pf = fopen("E:\\data.txt", "w+");
//	if (pf == NULL) {
//		perror(fopen);
//		return -1;
//	}
//	fputs("abcde", pf);
//	fputs("f\n", pf);
//	fputs("ghi", pf);
//	return 0;
//}

//int main() {
//	char arr[10];
//	FILE* pf = fopen("E:\\data.txt", "r");
//	if (pf == NULL) {
//		perror(fopen);
//		return -1;
//	}
//	fgets(arr, 3, pf);
//	printf("%s",arr);
//	fgets(arr, 3, pf);
//	printf("%s\n", arr);
//	fgets(arr, 3, pf);
//	printf("%s", arr);
//	fgets(arr, 5, pf);
//	printf("%s", arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main() {
//	int n = 1;
//	double m = 1.0;
//	FILE* pf = fopen("E:\\data.txt", "w");
//	if (pf == NULL) {
//		perror(fopen);
//		return -1;
//	}
//	fprintf(pf, "%d %f", n, m);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main() {
//	int n = 1;
//	double m = 1.0;
//	FILE* pf = fopen("E:\\data.txt", "r");
//	if (pf == NULL) {
//		perror(fopen);
//		return -1;
//	}
//	fscanf(pf, "%d %f", &n, &m);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}