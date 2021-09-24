#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
//int main() {
//	int* ptr = (int*)malloc(10 * sizeof(int));
//	int* ptr2 = (char*)malloc(10 * sizeof(char));
//}

//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int));
//	if (arr) {
//		for (int i = 0; i < n; ++i) {
//			*(arr + i) = i;
//		}
//	}
//	else {
//		printf("¶¯Ì¬ÄÚ´æ¿ª±ÙÊ§°Ü");
//	}
//	for (int i = 0; i < n; ++i)
//		printf("%d ", *(arr + i));
//	free(arr);
//	arr = NULL;
//	return 0;
//}

//int main() {
//	int* ptr1 = (int*)calloc(10,4);
//	char* ptr2 = (char*)calloc(10, 1);
//	char* ptr3 = (char*)malloc(10);
//	for (int i = 0; i < 10; ++i)
//		printf("%d ", *(ptr1 + i));
//	printf("\n");
//	printf("×Ö·û´®2:%s\n", ptr2);
//	printf("×Ö·û´®3:%s\n", ptr3);
//	return 0;
//}


//int main(){
//	int* ptr = malloc(100);
//	if (ptr != NULL){
//	}
//	else{
//		exit(EXIT_FAILURE);
//	}
//	int* p = NULL;
//	p = realloc(ptr, 1000);
//	if (p != NULL){
//		ptr = p;
//	}
//	free(ptr);
//	return 0;
//}

//int main() {
//	int arr[3] = { 0 };
//	scanf("%d %d %d", arr,arr+1,arr+2);
//	printf("%d %d %d", arr[0], arr[1], arr[2]);
//	printf("\n");
//	printf("%d %d %d", &arr[0], &arr[1], &arr[2]);
//	return 0;
//}

int main() {
	char s[] = "abcdefghjkl";
	printf("%s\n", s);
	printf("%s\n", s + 1);
	printf("%c\n", *s);
	printf("%c\n", *(s + 1));
	return 0;
}