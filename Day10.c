#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* pa = &a;// ָ�����pa
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%p\n", pc);
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

//�ṹ��Ĵ������ʼ��
struct stu
{
	char name[20];//��Ա����
		int age;
		double score;
};

struct book
{
	char name[20];
	float price;
	char id[20];

};


int main()
{
	struct stu s = { "����",20,85.5 };//�ṹ���ʼ��
	printf("%s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա����
	struct stu* ps = &s;
	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);// �ṹ��Ҳ����ȡָ��
	//�ȼ���
	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);//�ṹ��ָ��->��Ա������
	return 0;
}



