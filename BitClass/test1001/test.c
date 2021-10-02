#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>


//int main() {
//	FILE* pf = fopen("data.txt", "r");
	//if (pf == NULL) {
	//	perror(fopen);
	//	return -1;
	//}
//	int a = 0;
//	float b = 0.0;
//	fscanf(pf, "%d %f", &a, &b);
//	printf("%d %f", a, b);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main() {
//	char str[6];
//	int arr[] = { 1,2,3,4,5 };
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL) {
//		perror(fopen);
//		return -1;
//	}
//	fread(str, 1, 1, pf);
//	fread(arr, 4, 5, pf);
//	printf(str);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//int main()
//{
//	char c[] = "This is runoob";
//	char buffer[20];
//	FILE* fp = fopen("data.txt", "r+");
//	fwrite(c, strlen(c) + 1, 1, fp);
//	rewind(fp);
//	fread(buffer, strlen(c) + 1, 1, fp);
//	printf("%s\n", buffer);
//	fclose(fp);
//	return(0);
//}

int main() {
	FILE* pf = fopen("data.txt", "r");
	fseek(pf, 2, SEEK_SET);
	printf("Æ«ÒÆÁ¿1£º%d\n", ftell(pf));
	int ch = fgetc(pf);
	printf("Æ«ÒÆÁ¿2£º%d\n", ftell(pf));
	printf("%c\n", ch);
	return 0;
}
