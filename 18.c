//һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ��������������6 = 1��2��3.����ҳ�1000���ڵ�����������
#include<stdio.h>
#include<Windows.h>

int main()
{

	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = 1; i <= 1000; i++)
	{
		sum = 0;
		for (j = 1; j < i; j++)
		{
			if (i%j == 0)
			{
				sum += j;
			}
		}
		if (i == sum)
		{
			printf("%d������\n", i);
		}
	}
	system("pause");
	return 0;
}