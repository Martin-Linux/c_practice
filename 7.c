#include<stdio.h>
#include<Windows.h>

int main()
{
	int n = 0;
	printf("������һλ������Ҫ�������*���ٵĳ˷���\n");
	scanf_s("%d", &n);
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", j, i, i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}