//����������1�ĸ��� 
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	int input;
	printf("������һλ��:\n");
	scanf("%d", &input);
	int count = 0;
	while (input>0)
	{
		if (input % 2 == 1)
		{
			count++;
		}
		input /= 2;
	}
	printf("%d", count);
	system("pause");
	return 0;
}