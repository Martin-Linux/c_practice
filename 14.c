//���������������Ƕ������ɴ��⣺ѧϰ�ɼ� >= 90�ֵ�ͬѧ��A��ʾ��60 - 89��֮�����B��ʾ��60�����µ���C��ʾ��
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	int result = 0;
	printf("������ѧ���ɼ���\n");
	scanf("%d", &result);

	if (result >= 90)
	{
		printf("A");
	}
	else if (result >= 60 && result <= 89)
	{
		printf("B");
	}
	else
	{
		printf("C");
	}
	system("pause");
	return 0;
}