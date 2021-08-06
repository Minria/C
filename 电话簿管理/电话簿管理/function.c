#define _CRT_SECURE_NO_WARNINGS
#include"book.h"


void* ListCreat(struct PhoneBook* head) {
	head = NULL;
	return head;
}
void menu() {
	printf("0.ÍË³ö\n");
	printf("1.Ìí¼Ó\n");
	printf("2.´òÓ¡\n");
}
void* ListInsert(struct PhoneBook* head) {
	PhoneBook* p1 = NULL, *p2 = head;
	while (p2 && p2->next) {
		p2 = p2->next;
	}
	while (1) {
		p1 = (PhoneBook*)malloc(sizeof(PhoneBook));
		printf("ÊäÈëÐÕÃû>>"); scanf("%s",&p1->name);
		if (strcmp(p1->name, "0") == 0) {
			free(p1);
			break;
		}
		printf("ÊäÈëºÅÂë>>"); scanf("%s",&p1->telnum);
		if (head == NULL) {
			head = p1;
			p2 = p1;
		}
		else {
			p2->next = p1;
			p2 = p1;
		}
	}p2->next = NULL;
	return head;
}
void ListPrint(struct PhoneBook* head) {
	while (head) {
		printf("ÐÕÃû>>%s\n", head->name);
		printf("ºÅÂë>>%s\n", head->telnum);
		head = head->next;
	}
	printf("\n\n");
}