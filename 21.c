/*����ƹ����ӽ��б������������ˡ��׶�Ϊa, b, c���ˣ��Ҷ�Ϊx, y, z���ˡ��ѳ�ǩ���������������������Ա����������������
a˵������x�ȣ�c˵������x, z�ȣ��������ҳ�*/
#include<stdio.h>
#include<Windows.h>

int main()
{
	char A;
	char B;
	char C;
	char str;
	for (str = 'x'; str <= 'z'; str++)
	{
		if (str != 'x'&&str != 'z')
		{
			C = str;
		}
	}
	for (str = 'x'; str <= 'z'; str++)
	{
		if (str != 'x'&& str!=C)
		{
			A = str;
		}
	}
	
	for (str = 'x'; str <= 'z'; str++)
	{
		if (str != A && str != C)
		{
			B=str;
		}
	}
	printf("A�Ķ�����%c\n", A);
	printf("B�Ķ�����%c\n", B);
	printf("C�Ķ�����%c\n", C);
	
	system("pause");
	return 0;

}