//��ȡ�����Ƶ�ż��λ������λ
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	int input;
	printf("������һλ��:\n");
	scanf("%d", &input);
	int arr[32];
	int i = 0;
	while (input > 0)
	{
		arr[i] = input % 2;
		i++;
		input /= 2;
	}
	for (; i < 32; i++)
	{
		arr[i] = 0;
	}

	printf("����λ��:");
	for (i = 31; i >= 0; i -= 2)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("ż��λ��:");
	for (i=30; i >= 0; i -= 2)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}