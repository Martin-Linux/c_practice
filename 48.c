//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ����磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
#include<stdio.h>
#include<Windows.h>

int DigitSum(int num)
{
	if (num < 10)
	{
		return num;
	}
	else
	{
		return num % 10 + DigitSum(num / 10);
	}
}
int main()
{
	int num;
	printf("������һλ������\n");
	scanf_s("%d", &num);
	printf("��ɵ�����֮����:%d\n", DigitSum(num));
	system("pause");
	return 0;
}