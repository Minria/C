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

int precede(char a) {
	switch (a)
	{
	case '+':
		return 1;
	case '-':
		return 1;
	case '*':
		return 2;
	case '/':
		return 2;
	case '#':
		return 0;
	default:
		return 0;
	}
}

int comparePrecde(char a, char b) {
	return precede(a)-precede(b);
}
char operation(char a, char op, char b) {
	int n1 = a - 'a';
	int n2 = b - 'a';
	int n3 = 0;
	if (op == '+') {
		n3 = n1 + n2;
	}
	else if (op == '-') {
		n3 = n1 - n2;
	}
	else if (op == '*') {
		n3 = n1 * n2;
	}
	else {
		n3 = n1 / n2;
	}
	return (char)(n3 + 48);
}
int main() {
	Stack* s1 = (Stack*)malloc(sizeof(Stack));
	Stack* s2 = (Stack*)malloc(sizeof(Stack));
	s1->next = NULL;
	s2->next = NULL;
	push(s2, '#');
	char ch;
	while ((ch = getchar()) != '#' || getTop(s2) != '#') {
		getchar();
		if (ch != '+' && ch != '-' && ch != '*' && ch != '/' && ch != ')' && ch != '(') {
			push(s1, ch);
		}
		else {
			int prior = comparePrecde(getTop(s2), ch);
			if (prior < 0) {
				push(s2, ch);
			}
			while (prior >= 0) {
				if (prior == 0) {
					pop(s2);
				}
				else {
					char op = pop(s2);
					char b = pop(s1);
					char a = pop(s1);
					push(s1, operation(a, op, b));
				}
				if (getTop(s2) == '#') {
					break;
				}
				prior = comparePrecde(getTop(s2),ch);
			}
		}
	}
	char ans = getTop(s1);
	printf("%c", ans);
}
