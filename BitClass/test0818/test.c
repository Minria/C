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