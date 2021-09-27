#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

//
//int main() {
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL) {
//		perror("fopen");
//		return -1;
//	}
//	fseek(pf, 10, SEEK_CUR);
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//#include <stdio.h>
//int main() {
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//int main() {
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL) {
//		perror("fopen");
//		return -1;
//	}
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF) {
//		printf("%c\n", ch);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

