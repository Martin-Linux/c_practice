//���һ������ 2011 �� 1 �� 1 �տ�ʼÿ�����һ���棬����ɹһ���������ʵ�ֵ����� 2011 1 �� 1 ���Ժ������һ�죬�����������ڴ��滹����ɹ����
#include<stdio.h>
#include<Windows.h>

int Isleap(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int sum(int year, int mounth, int day)
{
	int sum = 0;
	int i = 2011;
	for (i = 2011; i < year; i++)
	{
		if (Isleap(i))
		{
			sum += 366;
		}
		else
		{
			sum += 365;
		}
	}
	int array[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	for (int i = 0; i < mounth; i++)
	{
		sum += array[i];
	}
	sum += day;

	if (Isleap(year) && (mounth > 2))
	{
		sum += 1;
	}
	return sum;
}
int main()
{

	int year, mounth, day;
	printf("�����������գ�\n");
	scanf_s("%d%d%d", &year, &mounth, &day);
	int n = 0;
	n = sum(year, mounth, day);
	if (n % 5<4 && n % 5 > 0)
	{
		printf("�ڴ���\n");
	}
	else
	{
		printf("ɹ��\n");
	}

	system("pause");
	return 0;
}