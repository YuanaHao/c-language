#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��n�Ľ׳�
//int main()
//{
//	//��ʼ������
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	//ȡ���Ͻ�n��ֵ �Ա���nȡֵҪ��&
//	scanf("%d", &n);
//	//����forѭ��дѭ�����
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;//�۳˵���ʽ
//	}
//	printf("%d\n", ret);//��ӡ
//	return 0;
//}

//�׳����
//1.����forǶ��ѭ��
//int main()
//{
	//int i = 0;
	//int n = 0;
	//int ret = 1;
	//int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;// ��ʼ��ret
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//			sum += ret;//sum ��ǰ��������� ���ܶ��ζ���
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//2.һ��forѭ��

//int mian()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret *= n;// ret���ٳ�ʼ�� �����ϴ�ѭ�����
//		sum += ret;
//
//	}
//	printf("%d", sum);
//	return 0;
//}

//���ֲ��������±�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//��������Ϊ7
//	//��arr�в���7
//	int sz = sizeof(arr) / sizeof(arr[0]);//Ԫ�ظ���
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
//			printf("�ҵ�����,�±��ǣ�%d\n",mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�������");
//	}
//	return 0;
//}


