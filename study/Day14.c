#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//求n的阶乘
//int main()
//{
//	//初始化变量
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	//取出上界n的值 对变量n取值要用&
//	scanf("%d", &n);
//	//利用for循环写循环语句
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;//累乘的形式
//	}
//	printf("%d\n", ret);//打印
//	return 0;
//}

//阶乘相加
//1.两个for嵌套循环
//int main()
//{
	//int i = 0;
	//int n = 0;
	//int ret = 1;
	//int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;// 初始化ret
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//			sum += ret;//sum 提前定义过整型 不能二次定义
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//2.一个for循环

//int mian()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret *= n;// ret不再初始化 保留上次循环结果
//		sum += ret;
//
//	}
//	printf("%d", sum);
//	return 0;
//}

//二分查找数组下标
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//查找数字为7
//	//在arr中查找7
//	int sz = sizeof(arr) / sizeof(arr[0]);//元素个数
//	int left = 0;
//	int right = sz - 1;
//	while(left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到数字,下标是：%d\n",mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到数字");
//	}
//	return 0;
//}


