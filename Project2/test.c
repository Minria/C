#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
#include <Windows.h>
#include<stdbool.h>

/**
* Author is wangfuming
*/

typedef struct Stack {
	char data;
	struct Stack* next;
}Stack;
void push(Stack* S, char e) {
	Stack* p = (Stack*)malloc(sizeof(Stack));
	p->data = e;
	p->next = S->next;
	S->next = p;
}
bool isEmpty(Stack* s) {
	return s->next == NULL ? true : false;
}
char pop(Stack* S) {
	if (S->next == NULL) {
		return '/0';
	}
	char ret = S->next->data;
	Stack* p = S->next;
	S->next = p->next;
	free(p);
	return ret;
}
char getTop(Stack* S) {
	if (S->next == NULL) {
		return '\0';
	}
	char ans = S->next->data;
	return ans;
}
// 栈内优先级
int isp(char a) {
	switch (a)
	{
	case '+':
		return 3;
	case '-':
		return 3;
	case '*':
		return 5;
	case '/':
		return 5;
	case '#':
		return 0;
	case '(':
		return 1;
	case ')':
		return 6;
	default:
		return 0;
	}
}
int icp(char a) {
	switch (a)
	{
	case '+':
		return 2;
	case '-':
		return 2;
	case '*':
		return 4;
	case '/':
		return 4;
	case '#':
		return 0;
	case '(':
		return 6;
	case ')':
		return 1;
	default:
		return 0;
	}
}


int main() {
	Stack* s1 = (Stack*)malloc(sizeof(Stack));
	Stack* s2 = (Stack*)malloc(sizeof(Stack));
	Stack* s3 = (Stack*)malloc(sizeof(Stack));
	s1->next = NULL;
	s2->next = NULL;
	s3->next = NULL;
	push(s2, '#');
	char s[256];
	gets(s);
	int len = strlen(s);
	for (int i = 1; s[i] != 0; i++) {
		char c = s[i];
		if (c >= '0' && c <= '9') {
			push(s1, c);
		}
		else {
			char inTop = getTop(s2);
			if (isp(inTop) < icp(c)) {
				push(s2, c);
			}
			else {
				while (true) {
					inTop = getTop(s2);
					if (isp(inTop) > icp(c)) {
						char tmp = pop(s2);
						push(s1, tmp);
					}
					else if (isp(inTop) == icp(c)) {
						pop(s2);
						break;
					}
				}
			}
		}
	}
	while (!isEmpty(s1)) {
		char tmp = pop(s1);
		//printf("%c", tmp);
		push(s3, tmp);
	}
	while (!isEmpty(s3)) {
		char c = pop(s3);
		if (c > '0' && c < '9') {
			push(s1, c);
		}
		else {
			char a = pop(s1);
			char b = pop(s1);
			int aa = a - 48;
			int bb = b - 48;
			int cc;
			switch (c)
			{
			case '+':
				cc = bb + aa;
				break;
			case '-':
				cc = bb - aa;
				break;
			case '*':
				cc = bb * aa;
				break;
			case '/':
				cc = bb / aa;
				break;
			}
			char ans = cc + 48;
			push(s1, ans);
		}
	}
	printf("%c", getTop(s1));
	return 0;
}