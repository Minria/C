#include"head.h"



int main() {
	Node list;
	list.data = (int*)malloc(4 * MAXSIZE);
	list.usedSize = 0;
	list.maxSize = 100;
	while (1) {
		int n = 0;
		printf("输入操作>>>");
		scanf("%d", &n);
		switch (n)
		{
		case 0:break;
		case 1:
			printf("添加位置>>");
			int pos, data;
			scanf("%d", &pos);
			printf("元素值>>");
			scanf("%d", &data);
			add(&list, pos, data);
			break;
		case 2:display(&list);
			break;
		case 3:
			printf("%d", getSize(&list));
			break;
		default:
			break;
		}
	}
}