//һ��5λ�����ж����ǲ��ǻ���������12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ
#include<stdio.h>
#include<Windows.h>

int main()
{
	int num;
	printf("������һ����λ����:");
	scanf_s("%d", &num);
	if (num % 10 == num / 10000 %10&& num / 10 % 10 == num / 1000 % 10)
	{
		printf("%d�ǻ�����\n", num);
	}
	else
	{
		printf("%d���ǻ�����\n", num);
	}
	system("pause");
	return 0;

}