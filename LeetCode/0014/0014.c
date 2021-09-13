#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

//char* longestCommonPrefix(char** strs, int strsSize) {
//    int i = 0;
//    int len1 = strlen(*strs);
//    int len2 = strlen(*(strs + 1));
//    int len3 = strlen(*(strs + 2));
//    for (i = 0; i < len1 && i < len2 && i < len3; ++i) {
//        char temp1 = *(*(strs + 0) + i);
//        char temp2 = *(*(strs + 1) + i);
//        char temp3 = *(*(strs + 2) + i);
//        if (temp1 == temp2 && temp2 == temp3) {
//
//        }
//        else {
//            break;
//        }
//    }
//    if (i == 0) {
//        return NULL;
//    }
//    else {
//        char* s = (char*)malloc(i + 1);
//        for (int k = 0; k < i; ++k)
//            s[k] = *(*strs + k);
//        s[i] = '\0';
//        return s;
//    }
//
//}


char* longestCommonPrefix(char** strs, int strsSize) {
    int i = 0;
    int min = 201;
    for (i = 0; i < strsSize; ++i) {
        min = min >= strlen(*(strs + i)) ? strlen(*(strs + i)) : min;
    }
    int flag = 0;
    for (i = 0; i < min; ++i) {
        flag = 0;
        char temp = *(*strs + i);
        for (int j = 1; j < strsSize; ++j) {
            if (temp != *(*(strs + j) + i)) {
                flag=1;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (i == 0) {
        return NULL;
    }
    else {
        char* s = (char*)malloc(i + 1);
        for (int k = 0; k < i; ++k)
            s[k] = *(*strs + k);
        s[i] = '\0';
        return s;
    }

}
int main() {
    char** strs[3] = {"flower", "flow", "flight"};
    printf("%s", longestCommonPrefix(strs, 3));
    return 0;
}