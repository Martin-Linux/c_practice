
/*�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�� ���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
A˵�������ҡ�
B˵����C��
C˵����D��
D˵��C�ں�˵
��֪3����˵���滰��1����˵���Ǽٻ���
�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�*/
#include<stdio.h>
#include<Windows.h>

int main()
{
	//��A=1,B=2,C=3,D=4
	//��Ϊ1����Ϊ0
	int killer;
	for (killer = 1; killer <= 4; killer++)
	{
		if ((killer != 1) + (killer == 3) + (killer == 4) + (killer != 4) == 3)
		{
			printf("�����ǣ�%c\n", killer + 'A' - 1);
		}
	}
	system("pause");
	return 0;
}