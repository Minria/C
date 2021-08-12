#define _CRT_SECURE_NO_WARNINGS
#include"test.h"
void menu() {
	printf("**********1.÷±Ω”≤Â»Î≈≈–Ú  *********\n");
	printf("**********2.’€∞Î≤Â»Î≈≈–Ú  *********\n");
	printf("**********3.  œ£∂˚≈≈–Ú    *********\n");
	printf("**********4.  √∞≈›≈≈–Ú    *********\n");
	printf("**********5.  øÏÀŸ≈≈–Ú    *********\n");
	printf("**********6.ºÚµ•—°‘Ò≈≈–Ú  *********\n");
	printf("**********7.∂—≈≈–Ú        *********\n");
	printf("**********8.πÈ≤¢≈≈–Ú      *********\n");
	
}
int main() {
	int nums[] = { 1,3,4,6,7,8,2,6,0,5 };
	int i = 0;
	int n = 0;
	menu();
	printf("Input:");
	scanf("%d", &n);
	switch (n)
	{
	case 1:InsertSort1(nums, 10);//÷±Ω”≤Â»Î≈≈–Ú
		break;
	case 2:InsertSort2(nums, 10);//’€∞Î≤Â»Î≈≈–Ú
		break;
	case 3:ShellSort(nums, 10);//œ£∂˚≈≈–Ú
		break;
	case 4:BubbleSort(nums, 10);//√∞≈›≈≈–Ú
		break;
	case 5:QuickSort(nums, 0, 9);//øÏÀŸ≈≈–Ú
		break;
	case 6:SelectSort(nums, 10);//ºÚµ•—°‘Ò≈≈–Ú
		break;
	case 8:MergeSort(nums, 10);
	default:
		break;
	}
	for (i = 0; i < 10; i++)
		printf("%d ", nums[i]);
	return 0;
}