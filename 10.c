//�ŵ����⣺��һ�����ӣ��ӳ�kc�����3������ÿ���¶���һ�����ӣ�С���ӳ����������º�ÿ��������һ�����ӣ��������Ӷ���������ÿ���µ���������Ϊ���٣�

#include<stdio.h>
#include<Windows.h>

int main()
{
	int arr[20] = { 0, 1 };
	int i = 0;
	for (i = 2; i < 20; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	for (i = 1; i < 20; i++)
	{
		printf("%d\n", arr[i]);
	}

	system("pause");
	return 0;
}