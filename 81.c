//��С�˵��ж�
#include<stdio.h>
#include<Windows.h>
int main()
{

	char c;
	int a = 2;
	int *p = &a;
	c = *p;
	if (c == a)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	system("pause");
	return 0;
}