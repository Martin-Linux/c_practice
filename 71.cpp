//����m��n���������ж��ٸ�bitλ��ͬ
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{

	int m, n;
	printf("��������λ������\n");
	scanf("%d%d", &m, &n);
	int count = 0;
	int ret = m^n;//�����ͬΪ0����ͬΪ1��
	while (ret)
	{
		ret = ret&(ret - 1);
		count++;
	}
	printf("%d", count);
	system("pause");
	return 0;
}