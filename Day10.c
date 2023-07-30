#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* pa = &a;// 指针变量pa
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

//结构体的创建与初始化
struct stu
{
	char name[20];//成员变量
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
	struct stu s = { "张三",20,85.5 };//结构体初始化
	printf("%s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量
	struct stu* ps = &s;
	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);// 结构体也可以取指针
	//等价于
	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);//结构体指针->成员变量名
	return 0;
}



