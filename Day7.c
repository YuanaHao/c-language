#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//int a = 0;
	//int b = 3;
	//int max = 0;

	//if (a > b)
	//	max = a;
	//else
	//	max = b;
	//µÈ¼ÛÓÚ
	int a = 0;
	int b = 3;
	int max = a > b ? a : b;
	printf("%d", max);
	return 0;
} 