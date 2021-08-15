#define _CRT_SECURE_NO_WARNINGS
char* intToRoman(int num) {
    char* str = (char*)malloc(20 * sizeof(char));
    int k = 0;
    while (num >= 1000) {
        str[k++] = 'M';
        num -= 1000;
    }
    if (num >= 900) {
        str[k++] = 'C';
        str[k++] = 'M';
        num -= 900;
    }
    if (num >= 500) {
        str[k++] = 'D';
        num -= 500;
    }
    if (num >= 400) {
        str[k++] = 'C';
        str[k++] = 'D';
        num -= 400;
    }
    while (num >= 100) {
        str[k++] = 'C';
        num -= 100;
    }
    if (num >= 90) {
        str[k++] = 'X';
        str[k++] = 'C';
        num -= 90;
    }
    if (num >= 50) {
        str[k++] = 'L';
        num -= 50;
    }
    if (num >= 40) {
        str[k++] = 'X';
        str[k++] = 'L';
        num -= 40;
    }
    while (num >= 10) {
        str[k++] = 'X';
        num -= 10;
    }
    if (num == 9) {
        str[k++] = 'I';
        str[k++] = 'X';
        num -= 9;
    }
    if (num >= 5) {
        str[k++] = 'V';
        num -= 5;
    }
    if (num == 4) {
        str[k++] = 'I';
        str[k++] = 'V';
        num -= 4;
    }
    while (num) {
        str[k++] = 'I';
        num--;
    }
    str[k] = 0;
    return str;
}