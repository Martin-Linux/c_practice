//���õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������
#include<stdio.h>
#include<Windows.h>

int fact(int n)
{
	int c = 0;
	if (n <= 1)
	{
		c = getchar();
		putchar(c);
	}
	else
	{
		c = getchar();
		fact(n - 1);
		putchar(c);
	}
}


int main()
{
	int n = 5;
	fact(n);
	system("pause");
	return 0;
}
