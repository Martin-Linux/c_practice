//��s = a + aa + aaa + aaaa + aa...a��ֵ������a��һ�����֡�����2 + 22 + 222 + 2222 + 22222(��ʱ����5�������)������������м��̿��ơ�
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

int main()
{
	int a ,num;
	int sum = 0;
	int temp = 0;
	printf("����һλ��Ҫ���������������һλ��Ҫ��������ӵ�����\n");
	scanf("%d%d", &a,&num);
	int i = 0;
	for (i = 0; i <num; i++)
	{

		temp = temp * 10 + a;
		sum += temp;
		

	}
	printf("%d", sum);
	system("pause");
	return 0;

}