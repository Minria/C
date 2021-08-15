#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int maxArea(int* height, int heightSize) {
//    int s = 0, min = 0;
//    int i = 0, j = 0;
//    for (i = 0; i < heightSize - 1; i++) {
//        min = height[i];
//        for (j =heightSize-1;j>i; j--) {
//            min =height[i] > height[j] ? height[j]:height[i];
//            s = s > (min * (j - i)) ? s : (min * (j - i));
//        }
//    }
//    return s;
//}//可行，提交超出时间限制。
//qtm的双指针
//int maxArea(int* height, int heightSize) {
//    int left = 0, right = heightSize - 1;
//    int s = 0;
//    int min = 0;
//    while (left < right) {
//        min = height[left] > height[right] ? height[right] : height[left];
//        s = s > (min * (right - left)) ? s : min * (right - left);
//        height[left] > height[right] ? right-- : left++;
//    }
//    return s;
//}//执行成功


int main() {
    int height[] = { 1,8,6,2,5,4,8,3,7 };
    int size = sizeof(height) / sizeof(height[0]);
    printf("%d", maxArea(height,size));
    return 0;
}
