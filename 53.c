//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��������9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
#include<stdio.h>
#include<windows.h>

int main()
{
	int i, j,num;
	printf("������һλ����Ҫ������˼��ĳ˷���\n");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%2d*%2d=%3d ", j, i, j*i);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}