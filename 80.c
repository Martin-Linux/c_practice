/* ��������ʹ����ȫ����λ��ż��ǰ�档
>
>    ��Ŀ��
>
>    ����һ���������飬ʵ��һ��������
>    �����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
>    ����ż��λ������ĺ�벿�֡�*/
#include<stdio.h>
#include<Windows.h>
#define N 10
#pragma warning(disable:4996)

void Find(int *start, int *end)
{
	while (start < end)
	{
		if (*start % 2 == 0&&*end%2!=0)
		{
			int temp = *start;
			*start = *end;
			*end = temp;
		}
		else if (*start % 2 != 0)
		{
			start++;
		}
		else if (*end%2 == 0)
		{
			end--;
		}
	}
}
int main()
{
	int a[N];
	printf("������10��������\n");
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	int *start = a;
	int *end = a + sizeof(a) / sizeof(a[0]) - 1;
	Find(start, end);
	for (i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}