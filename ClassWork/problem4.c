
#include<stdio.h>
#include<malloc.h>

int nums[4][4] = { {1,0,0,0},{0,2,0,0},{0,0,3,0},{0,0,0,4} };
int arr[4];
void pack() {
	int numsSize = sizeof(nums[0]) / 4;
	for (int i = 0; i < numsSize; i++) {
		arr[i] = nums[i][i];
	}
}
int getNum(int i, int j) {
	if (i != j) {
		return 0;
	}
	return arr[i];
}
int main() {
	pack();
	printf("%d\n", getNum(0, 0));
	printf("%d\n", getNum(1, 1));
	printf("%d\n", getNum(2, 2));
	printf("%d\n", getNum(3, 3));
	printf("%d\n", getNum(3, 0));
	return 0;
}