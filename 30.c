//һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ����
#include<stdio.h>
#include<Windows.h>

int main()
{
	int num1,num2;
	int count = 0;
	printf("������һ��������5λ������\n");
	scanf_s("%d", &num1);
	num2 = num1;
	while (num1 % 10 != 0)
	{
		count++;
		num1 = num1 / 10;
	}
	printf("һ����%dλ\n", count);
	int i = 0;
	for (i = 1; i <= count; i++)
	{
		printf("%d ", num2 % 10);
		num2 = num2/ 10;
	}
	system("pause");
	return 0;
}