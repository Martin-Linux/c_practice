/*������ĸ�������һЩ������ͼ�Σ����������һ�����ӣ�
ABCDEFG
BABCDEF
CBABCDE
DCBABCD
EDCBABC
����һ��5��7�е�ͼ�Σ����ҳ����ͼ�εĹ��ɣ������һ��n��m�е�ͼ�Ρ�
�����ʽ
����һ�У�������������n��m���ֱ��ʾ��Ҫ�����ͼ�ε�������������
�����ʽ
���n�У�ÿ��m���ַ���Ϊ���ͼ��*/
#include<stdio.h>
#include<windows.h>


int main()
{
	int n, m;
	printf("����������������һ����ʾ��һ����ʾ��:\n");
	scanf_s("%d%d", &n, &m);
	char c;
	int i, j, k;
	char array[10][10] = { 0 };
	for (i = 0; i < n; i++)
	{
		c = 'A';
		for (j = i; j < m; j++)
		{
			array[i][j] = c++;
		}
		c = 'A';
		for (k = i - 1; k >= 0; k--)
		{
			array[i][k] = ++c;
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%c", array[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}