#include<stdio.h>
//int main() {
//	int a = 1;
//	printf("%d", a);
//	return 0;
//}

//p[i]==*(p+i)
//p[i][j]==*(*(p+i)+j)
//int main() {
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//4¡Á12=48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//4¡Á4=16
//	printf("%d\n", sizeof(a[0] + 1));//&a[0][1],4»ò8
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	printf("%d\n", sizeof(a + 1));//4/8
//	printf("%d\n", sizeof(*(a + 1)));//16
//	printf("%d\n", sizeof(&a[0] + 1));//4/8
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16
//	return 0;
//}
// 
// 
//void InsertSort(int* arr, int arrSize) {
//	int i = 1;
//	for (i = 1; i < arrSize; ++i) {
//		if (arr[i] < arr[i - 1]) {
//			int temp = arr[i];
//			int j = 0;
//			for (j = i - 1; j >= 0 && arr[j] > temp; --j) {
//				arr[j+1] = arr[j];
//			}
//			arr[j+1] = temp;
//		}
//	}
//}

//void InsertSort(int* arr, int arrSize) {
//	int i = 0;
//	for (i = 1; i < arrSize; ++i) {
//		if (arr[i] < arr[i - 1]) {
//			int temp = arr[i];
//			int left = 0, right = i - 1;
//			int mid = 0;
//			while (left <= right) {
//				mid = (left + right) / 2;
//				if (arr[mid] > temp)
//					right = mid - 1;
//				else if (arr[mid] < temp)
//					left = mid + 1;
//				else
//					break;
//			}
//			int j = 0;
//			for (j = i - 1; j >= mid; --j)
//				arr[j + 1] = arr[j];
//			arr[j + 1] = temp;
//		}
//	}
//}

//void bubbleSort(int* arr, int arrSize) {
//	int i, j;
//	for (i = 0; i < arrSize - 1; ++i) {
//		for (j = arrSize - 1; j > i; --j) {
//			if (arr[j] < arr[j - 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j - 1];
//				arr[j - 1] = temp;
//			}
//		}
//	}
//}
int main() {
	int arr[] = { 12,2,5,1,9,6,153,243,123,13 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	//InsertSort(arr, arrSize);
	//bubbleSort(arr, arrSize);
	for (int i = 0; i < arrSize; ++i)
		printf("%d ", arr[i]);
	return 0;
}