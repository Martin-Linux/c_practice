//��дһ������ʵ��n^ k��ʹ�õݹ�ʵ��
#include<stdio.h>
#include<Windows.h>

int fib(int n, int k)
{
	if (k==1)
	{
		return n;
	}
	else if (k == 0)
	{
		return 1;
	}
	else
	{
		return n*fib(n,k-1);
	}
}
int main()
{
	int n, k;
	printf("��������������,һ����ʾnһ����ʾk��\n");
	scanf_s("%d%d", &n, &k);
	printf("n^k��%d", fib(n, k));
	system("pause");
	return 0;
}