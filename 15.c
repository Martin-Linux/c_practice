//��������������m��n���������Լ������С������

#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	int a, b, m, n, temp;
	printf("������������������");

	scanf("%d %d", &m, &n);

	if (m < n)

	{
		temp = m;
		m = n;
		n = temp;
	}
	a = m;
	b = n;

	/*����շ������ֱ��bΪ0Ϊֹ*/
	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}

	printf("���Լ���ǣ�%d\n", a);
	printf("��С�������ǣ�%d\n", m*n / a);

	system("pause");
	return 0;
}
