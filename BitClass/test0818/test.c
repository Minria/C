#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<malloc.h>


//long long quickMul(int x, int y) {
//	if (y == 0)
//		return 1;
//	if (y == 1)
//		return x;
//	int temp = x;
//	for (int i = 0; i < y / 2; ++i)
//		x = x * x;
//	if (y % 2 == 1)
//		return (long long)temp * x;
//	else
//		return x;
//}
//int main() {
//	int x = 3;
//	int y = 0;
//	printf("%lld", quickMul(x, y));
//	return 0;
//}
// 
// 
////双指针，快慢指针，快指针走2，慢指针走1
//SListNode* FindMiddle(SList* plist) {
//	SListNode* pSlow = plist->_head;
//	SListNode* pFast = plist->_head;
//	while (pFast) {
//		if (pFast->_next != NULL) {
//			pFast = pFast->_next->_next;
//		}
//		else {
//			break;
//		}
//		pSlow = pSlow->_next;
//	}
//	return pSlow;
//}

//char del(char* s1, char* s2) {
//	int arr[128] = { 0 };
//	while (*s2)
//		++arr[*s2++];
//	char* slow = s1, * fast = s1;
//	while (*fast) {
//		if (arr[*fast] == 0 || *fast == ' ')
//			*slow++ = *fast++;
//		else
//			++fast;
//	}
//	*slow = 0;
//}
//int main() {
//	char s1[] = "They are students.";
//	char s2[] = "aeiou";
//	del(s1, s2);
//	printf("%s", s1);
//	return 0;
//}
//void quicksort(int* nums, int left, int right) {
//	if (left >= right)
//		return;
//	int i = left, j = right;
//	int temp = nums[left];
//	while (i < j) {
//		while (i < j && nums[j] >= temp)
//			--j;
//		nums[i] = nums[j];
//		while (i < j && nums[i] <= temp)
//			++i;
//		nums[j] = nums[i];
//	}
//	nums[i] = temp;
//	quicksort(nums, left, i);
//	quicksort(nums, i + 1, right);
//}
//int findonce(int* nums, int numsSize,int* arr) {
//	quicksort(nums, 0, numsSize-1);
//	int slow = 0, fast = slow + 1;
//	int i = 0;
//	while (fast < numsSize) {
//		if (nums[slow] != nums[fast]) {
//			arr[i++] = nums[slow];
//			if (fast == numsSize - 1 && i == 1)
//				arr[i++] = nums[fast];
//			if (i == 2) break;
//			++slow;
//			++fast;
//		}
//		else {
//			slow += 2;
//			fast +=2;
//		}
//	}
//}
//int main() {
//	int nums[] = { 1,2,5,5,3,3,7,7 };
//	int arr[2] = { 0 };
//	findonce(nums, 8, arr);
//	printf("%d %d", arr[0], arr[1]);
//	return 0;
//}

//int find(int nums[][4], int cow1, int col1, int cow2, int col2,int target) {
//	if (cow1 > cow2 || col1 > col2)
//		return;
//	if (cow1 <= cow2 && col1 <= col2) {
//		int midcow = (cow1 + cow2) / 2;
//		int midcol = (col1 + col2) / 2;
//		if (nums[midcow][midcol] == target)
//			return 1;
//		else if (nums[midcow][midcol] > target) {
//			find(nums, cow1, col1, midcow - 1, midcol, target);
//			find(nums, cow1, col1, midcow, midcol - 1, target);
//		}
//		else {
//			find(nums, midcow +1, midcol, cow2, col2, target);
//			find(nums, midcow, midcol+1, cow2, col2, target);
//		}
//	}
//}
//int main() {
//	int nums[4][4] = { {1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15} };
//	int ret = find(nums, 0, 0, 3, 3, );
//	printf("%d", ret);
//	return 0;
//
//}