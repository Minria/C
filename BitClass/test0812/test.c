#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Find(int nums[][4],int num, int cow1, int cow2, int col1, int col2) {
	if (cow1 <= cow2 && col1<= col2) {
		int count = 0;
		int mid1 = (cow1 + cow2) / 2;
		int mid2 = (col1 + col2) / 2;
		if (nums[mid1][mid2] == num)
			return 1;
		else if (nums[mid1][mid2] > num) {
			if (Find(nums, num, cow1, mid1 - 1, col1, mid2) == 1)
				return 1;
			else
				return 0;
			if (Find(nums, num, cow1, mid1, col1, mid2 - 1) == 1)
				return 1;
			else
				return 0;
		}
		else {
			if (Find(nums, num, mid1, cow2, mid2 + 1, col2) == 1)
				return 1;
			else
				return 0;
			if (Find(nums, num, mid1 + 1, cow2, mid2, col2) == 1)
				return 1;
			else
				return 0;
		}

	}
}
int main() {
	int nums[4][4] = { {1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15} };
	int num = 8;
	int ret = Find(nums, num, 0, 0, 3, 3);
	printf("%d", ret);
	return 0;
}


