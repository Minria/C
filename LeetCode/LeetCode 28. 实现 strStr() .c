#define _CRT_SECURE_NO_WARNINGS
int strStr(char* haystack, char* needle) {
    int len1 = strlen(haystack);
    int len2 = strlen(needle);
    if (len2 == 0) {
        return 0;
    }
    int i = 0;
    char temp = 0;
    for (i = 0; i <= len1 - len2; i++, haystack++) {
        temp = *(haystack + len2);
        *(haystack + len2) = 0;
        if (strcmp(haystack, needle) == 0) {
            return i;
        }
        *(haystack + len2) = temp;
    }
    return -1;
}
int strStr(char* haystack, char* needle) {
    int n = strlen(haystack);
    int m = strlen(needle);
    for (int i = 0; i + m <= n; i++) {
        bool flag = true;
        for (int j = 0; j < m; j++) {
            if (haystack[i + j] != needle[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            return i;
        }
    }
    return -1;
}