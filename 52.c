//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
#include<stdio.h>
#include<Windows.h>

void fact(int n)
{
	if (n > 9)
	{
		fact(n / 10);
	}

		printf("%d ", n % 10);
	
}
int main()
{
	int n;
	printf("������Ҫ��ӡ��������\n");
	scanf_s("%d", &n);
	fact(n);
	system("pause");
	return 0;
}