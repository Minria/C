#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<malloc.h>

//int getKthNum(int* nums1, int nums1Size, int* nums2, int nums2Size,int k) {
//	int p1 = 0, p2 = 0;
//	int KthNum = 0;
//	while (1) {
//		if (p1 == nums1Size)
//			return nums2[p2 + k - 1];
//		if (p2 == nums2Size)
//			return nums1[p1 + k - 1];
//		if (k == 1)
//			return nums1[p1] > nums2[p2] ? nums2[p2] : nums1[p1];
//		int mid = k / 2;
//		int newP1 = (p1 + mid> nums1Size?nums1Size:p1+mid) - 1;
//		int newP2 = (p2 + mid>nums2Size?nums2Size:p2+mid) - 1;
//		int pivot1 = nums1[newP1], pivot2 = nums2[newP2];
//		if (pivot1 <= pivot2) {
//			k -= (newP1 - p1 + 1);
//			p1 = newP1 + 1;
//		}
//		else {
//			k -= (newP2 -p2 + 1);
//			p2 = newP2 + 1;
//		}
//	}
//
//}
//double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
//	int len = nums1Size + nums2Size;
//	if (len % 2 == 1) {
//		int mid = len / 2;
//		double median = getKthNum(nums1, nums1Size,nums2, nums2Size, mid+ 1);
//		return median;
//	}
//	else {
//		int mid1 = len / 2 - 1, mid2 = len / 2;
//		double median = (getKthNum(nums1, nums1Size, nums2, nums2Size, mid1 + 1) + getKthNum(nums1, nums1Size, nums2, nums2Size, mid2 + 1)) / 2.0;
//		return median;
//	}
//}
//int main() {
//	return 0;
//}

//char* convert(char* s, int numRows) {
//    if (numRows == 1)
//        return s;
//    int len = strlen(s);
//    char* str = (char*)malloc((len+1) * sizeof(char));
//    int k = 0;
//    int i = 0, j = 0;
//    for (i = 0; i < numRows; i++) {
//        for (j = i; j < len||j-2*i<len; j += 2 * numRows - 2) {
//            if (i > 0 && i < numRows - 1) {
//                if (j > i) {
//                    str[k++] = s[j - i * 2];
//                }
//            }
//            if(j < len)
//                str[k++] = s[j];
//
//        }
//    }
//    str[k] = 0;
//    return str;
//}




//int main() {
//	char s[] = "A";
//	int k = 1;
//	printf("%s", convert(s, k));
//	return 0;
//}
//
//int IsPalindrome(char* s, int k) {
//	int left = 0, right = k;
//	while (left < right) {
//		if (s[left] != s[right])
//			return 1;
//		++left;
//		--right;
//	}
//	return k+1;
//}
//char* longestPalindrome(char* s) {
//	int len = strlen(s);
//	int i = 0, j = 0;
//	int max = 1;
//	int arr[2] = { 0 };
//	for (i = 0; i < len; ++i) {
//		for (j = len - 1; j > i; --j) {
//			int k = j - i;
//			if (IsPalindrome(s + i, k) > max) {
//				arr[0] = i;
//				arr[1] = j;
//				max = IsPalindrome(s + i, k);
//			}
//		}
//	}
//	i = arr[0];
//	j = arr[1];
//	char* str = (char*)malloc((j - i + 1) * sizeof(char));
//	char temp = s[j + 1];
//	s[j + 1] = 0;
//	strcpy(str, s + i);
//	s[j + 1] = temp;
//	return str;
//}


//int Palindrome(char* str) {
//    int len = strlen(str);
//    int left = 0, right = len - 1;
//    while (left <= right) {
//        if (str[left] != str[right]) {
//            break;
//        }
//        else {
//            left++;
//            right--;
//        }
//    }
//    if (left >= right) {
//        return len;
//    }
//    else {
//        return 0;
//    }
//}
//char* longestPalindrome(char* s) {
//    int n = strlen(s);
//    if (n <= 1)
//        return s;
//    char* s1 = (char*)malloc(n * sizeof(char));
//    int max = 0;
//    int i = 0, j = 0;
//    for (i = 0; i < n; i++) {
//        for (j = n - 1; j >= i; j--) {
//            if (s[j] == s[i]) {
//                char temp = s[j + 1];
//                s[j + 1] = 0;
//                if (Palindrome(s + i) == j - i + 1) {
//                    if (j - i + 1 > max) {
//                        max = j - i + 1;
//                        strcpy(s1, s + i);
//                    }
//                    s[j + 1] = temp;
//                }
//            }
//        }
//    }
//    return s1;
//}
//int main() {
//	char s[] = "bb";
//	printf("%s", longestPalindrome(s));
//	return 0;
//}


//int myAtoi(char* s) {
//	long long sum = 0;
//	char a = '+';
//	while (*s == ' ') {
//			s++;
//	}//前置空格导出
//	if (*s == '-' || *s == '+') {
//		a = *s;
//		s++;
//	}//+-号判断
//	while(*s >= '0' && *s <= '9') {
//			sum = sum * 10 + *s-48;
//			s++;
//			if (a == '-' && sum >= pow(2,31))
//				return -pow(2,31);
//			if (a!='-'&&sum >= pow(2, 31) - 1)
//				return pow(2,31)-1;
//	}//数字导入，不是数字直接结束
//	if (a == '-')
//		return -sum;
//	else
//		return sum;
//}
//int main() {
//	char s[] = "-2147483647";
//	printf("%d", myAtoi(s));
//	return 0;
//}

int isValid(char* s) {
    int len = strlen(s);
    char* str = (char*)malloc(len / 2);
    int a = -1, i = 0;
    for (i = 0; i < len; ++i) {
        if (*(s + i) == '(' || *(s + i) == '[' || *(s + i) == '{') {
            ++a;
            str[a] = *(s + i);
        }
        else {
            if (*(s + i) == ')' && str[a] == '(') {
                --a;
            }
            else if (*(s + i) == '}' && str[a] == '{') {
                --a;
            }
            else if (*(s + i) == ']' && str[a] == '[') {
                --a;
            }
            else
                return 0;
        }
    }
    if (a >= 0) return 0;
    return 1;
}
int main() {
    char s[] = "[[";
    printf("%d", isValid(s));
    return 0;
}
