//һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�
#include<stdio.h>
#include<Windows.h>

int main()
{
	double hight = 100;
	int i = 0;
	double sum = 0;
	for (i = 0; i < 10; i++)
	{
		sum += 3 * hight / 2;
		hight = hight / 2;
	}
	printf("��ʮ�����ʱ������%f�ף���ʮ�η����ĸ߶���%f\n",sum,hight);
	system("pause");
	return 0;
}