#include"head.h"

int main() {
	LNode* head = NULL;
	while (1) {
		menu();
		int flag = 1;
		printf("²Ù×÷>>");
		int n = 0;
		scanf("%d", &n);
		switch (n) {
		case 1:head=addHead(head);
			break;
		case 2:head=addLast(head);
			break;
		case 3:printfList(head);
			break;
		case 4:
			printf("É¾³ýÔªËØ>>");
			int val;
			scanf("%d", &val);
			del(head, val);
			break;
		case 0:flag = 0;
			break;
		}
		if (flag == 0)
			break;
	}
}

