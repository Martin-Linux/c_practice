//��ӡ�����еġ�ˮ�ɻ���������ν��ˮ�ɻ�������ָһ����λ�������λ���������͵��ڸ����������磺153��һ����ˮ�ɻ�������
//��Ϊ153 = 1�����η���5�����η���3�����η�

#include<stdio.h>
#include<Windows.h>
int main()
{
	int ge = 0;
	int shi = 0;
	int bai = 0;
	int i = 0;
	for (i = 100; i < 1000; i++)
	{
		ge = i % 10;
		shi = i / 10 % 10;
		bai = i / 100;
		if (ge*ge*ge + bai*bai*bai + shi*shi*shi == i)
		{
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}