#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }
    int n = x;
    long long sum = 0;
    while (n) {
        sum = sum * 10 + n % 10;
        n = n / 10;
    }
    if (sum == x) {
        return true;
    }
    else {
        return false;
    }
}
//bool isPalindrome(int x) {
//    if (x < 0) {
//        return false;
//    }
//    int n = x;
//    long long sum = 0;
//    while (n) {
//        sum = sum * 10 + n % 10;
//        n = n / 10;
//        if (n == sum || n == sum / 10)
//            return true;
//    }
//    return false;
//}