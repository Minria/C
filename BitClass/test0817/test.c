#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<malloc.h>


//void LevelOrder(BiTree T) {
//	InitQueue(Q);
//	BiTree p;
//	EnQueue(Q, T);
//	while (!IsEmpty(Q)) {
//		DeQueue(Q, p);
//		visit(p);
//		if (p->lchild)
//			EnQueue(Q, p->lchild);
//		if (p->rchild)
//			EnQueue(Q, p->rchild);
//	}
//}





//typedef struct ThreadNode {
//	ElemType data;
//	struct ThreadNode* lchild, * rchild;
//	int ltag, rtag;
//}ThreadNode,*ThreadTree;

//char OnlyOnce(char* s) {
//	int arr[128] = { 0 };
//	int len = strlen(s);
//	char temp = 0;
//	for (int i = 0; i < len; ++i) 
//		++arr[s[i]];
//	for (int i = 0; i < len; ++i) {
//		if (arr[s[i]] == 1) {
//			temp = s[i];
//			break;
//		}
//	}
//	return temp;
//}
// 
// 
// 
// 
//int main() {
//	char s[] = "abaccdeff";
//	printf("%c", OnlyOnce(s));
//	return 0;
//}



//char FirstRe(char* s) {
//	int arr[128] = { 0 };
//	char* p = s;
//	while (*p) {
//		if (arr[*p] == 1)
//			return *p;
//		++arr[*p];
//		p++;
//	}
//}
//int main() {
//	char s[] = "qywyer23tdd";
//	printf("%c", FirstRe(s));
//	return 0;
//}



////设定有序数组为递增数组
//int* returnarr(int* nums, int numsSize,int target,int* returnSize) {
//	int left = 0, right = numsSize - 1;
//	int arr[2] = { 0 };
//	while (left < right) {
//		if (nums[left] + nums[right] == target) {
//			*returnSize = 2;
//			arr[0] = left;
//			arr[1] = right;
//			return arr;
//		}
//		else if (nums[left] + nums[right] > target) {
//			--right;
//		}
//		else
//			++left;
//	}
//	*returnSize = 0;
//}
//int main() {
//	int nums[7] = { 1,2,3,4,5,6,7 };
//	int numsSize = 7;
//	int target = 3;
//	int returnSize=0;
//	int* arr = returnarr(nums, numsSize, target, &returnSize);
//	if (returnSize == 2) {
//		printf("%d %d", arr[0],arr[1]);
//	}
//	return 0;
//}




////通过二进制数的1的个数判断，二进制数字里面只有一个1
//int IsTwo(int n) {
//	int count = 0;
//	for (int i = 31; i >= 0; --i) {
//		if (n & 1 == 1)
//			++count;
//		n = n >> 1;
//	}
//	if (count == 1)
//		return 1;
//	else
//		return 0;
//}
//
//int main() {
//	int arr[5] = {3,5,6,7,16};
//	for(int i=0;i<5;++i)
//		printf("%d ", IsTwo(arr[i]));
//	return 0;
//}
//
////通过二进制数的1的个数判断，二进制数字里面只有一个1
//bool IsTwo(int n) {
//	int count = 0;
//	for (int i = 31; i >= 0; --i) {
//		if (n & 1 == 1)
//			++count;
//		n = n >> 1;
//	}
//	if (count == 1)
//		return true;
//	else
//		return false;
//}

////直接在原字符串上改，不能超过9
//void push(char* s) {
//	char* slow = s, * fast = s;
//	char temp = *s;
//	int nums = 0;
//	while (1) {
//		if (*fast!= temp || *fast == 0) {
//			if (nums != 1) {
//				*slow++ = nums + 48;
//				nums = 0;
//				*slow++ = temp;
//			}
//			else {
//				*slow++ = temp;
//				nums = 0;
//			}
//			if (*fast == 0) {
//				*slow = 0;
//				break;
//			}
//			else {
//				temp = *fast;
//			}
//		}
//		else {
//			++fast;
//			++nums;
//		}
//	}
//}
//int main() {
//	char s[] = "xxxyz";
//	push(s);
//	printf("%s", s);
//	return 0;
//}





void delspace(char* s) {
	char* slow = s, * fast = s;
	int count = 0;
	while (*fast) {
		while (*fast && *fast == ' ')
			++fast;
		if (*fast == 0)
			break;
		if (count == 1)
			*slow++ = ' ';
		while (*fast != ' ' && *fast)
			*slow++ = *fast++;
		count = 1;
		if (*fast == 0)
			break;
	}
	*slow = 0;
}
int main() {
	char s[] = "   abc   sdd s   ";
	delspace(s);
	printf("%s", s);
	return 0;
}

