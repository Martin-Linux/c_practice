//���ã�a+b��/2;��ƽ��ֵ 
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
double average(double x, double y)
{
	
	if (x >= y)
	{
		return  (x - y) / 2 + y;
	}
	else
	{
		return (y - x) / 2 + x;
	}
	
}
int main()
{
	double a, b;
	printf("��������λ����\n");
	scanf("%lf%lf", &a, &b);
	printf("%lf", average(a, b));
	system("pause");
	return 0;
}