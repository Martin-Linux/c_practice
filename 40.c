//ʹ�ýṹ�壨struct���洢ѧ����Ϣ��
#include<stdio.h>
#include<Windows.h>

typedef struct Stu
{
	char name[20];
	char sex[3];
	int age;
}stu;

int main()
{
	stu s = { "likuan", "��", 250 };
	printf("%s\n", s.name);
	printf("%s\n", s.sex);
	printf("%d\n", s.age);

	system("pause");
	return 0;
}