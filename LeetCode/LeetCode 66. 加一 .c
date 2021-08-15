#define _CRT_SECURE_NO_WARNINGS
#include<malloc.h>
#include<stdio.h>

//int* plusOne(int* digits, int digitsSize, int* returnSize)
//{
//    int i=0;
//    int* result = (int*)malloc(sizeof(int) * (digitsSize + 1));
//    for (i = 0; i < digitsSize; ++i)
//        result[i] = digits[i];
//    for (i = digitsSize - 1; i >= 0; --i)
//    {
//        if (result[i] == 9)
//            result[i] = 0;
//        else
//        {
//            result[i]++;
//            *returnSize = digitsSize;
//            return result;
//        }
//    }
//    result[0] = 1;
//    for (i = 1; i < digitsSize + 1; ++i)
//        result[i] = 0;
//    *returnSize = digitsSize + 1;
//    return result;
//}


int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i = 0;
    int count = 1;
    for (i = 0; i < digitsSize; i++) {
        if (digits[i] != 9) {
            count = 0;
            break;
        }
    }
    int* ret = (int*)malloc((digitsSize + 1) * sizeof(int));
    if (count == 1) {
        *returnSize = digitsSize + 1;
        ret[0] = 1;
        for (i = 1; i < digitsSize + 1; i++)
            ret[i] = 0;
    }
    else {
        *returnSize = digitsSize;
        int carry = 0;
        digits[digitsSize - 1]++;
        for (i = digitsSize - 1; i >= 0; i--) {
            ret[i] = digits[i] + carry;
            carry = 0;
            if (ret[i]>9) {
                ret[i] -= 10;
                carry = 1;
            }
        }
    }
    return ret;
}