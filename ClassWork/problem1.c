#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
#include <Windows.h>

typedef struct ArrayList {
	int length;
	int* data;
}ArrayList;

void disPlay(ArrayList* L) {
	for(int i = 0; i < L->length; i++) {
		printf("%d ", L->data[i]);
	}
	printf("\n");
}

ArrayList* megerSort(ArrayList* L1,ArrayList* L2) {
	int i = 0;
	int j = 0;
	int l = 0;
	ArrayList* ans = (ArrayList*)malloc(sizeof(ArrayList));
	ans->length = L1->length + L2->length;
	ans->data = (int*)malloc(4 * ((ans->length)));
	while (i < L1->length && j < L2->length) {
		ans->data[l++] = L1->data[i] > L2->data[j] ? L2->data[j++] : L1->data[i++];
	}
	while (i < L1->length) {
		ans->data[l++] = L1->data[i++];
	}
	while (j < L2->length) {
		ans->data[l++] = L2->data[j++];
	}
	return ans;
}

//int main() {
//	int nums1[] = { 2,2,3 }; 
//	int nums1Size = sizeof(nums1) / 4; 
//	int nums2[] = { 1,3,3,4 }; 
//	int nums2Size = sizeof(nums2) / 4; 
//	ArrayList* L1 = (ArrayList*)malloc(sizeof(ArrayList));
//	ArrayList* L2 = (ArrayList*)malloc(sizeof(ArrayList));
//	L1->length = nums1Size;
//	L1->data = nums1;
//	L2->data = nums2;
//	L2->length = nums2Size;  
//	ArrayList* ret = megerSort(L1,L2);
//	disPlay(ret);
//	return 0;
//}
