#include"head.h"


int main() {

	SqStack s;
	Stack(&s);
	push(&s, 1);
	push(&s, 2);
	int x = -1;
	getTop(&s, &x);
	printf("%d\n", x);
	pop(&s, &x);
	pop(&s, &x);
	printf("%d\n", x);
	getTop(&s, &x);
	printf("%d\n", x);
	return 0;
}