//����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����

#include<stdio.h>
#include<Windows.h>


int main()
{
	char m ;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	printf("������һ���ַ�:");
	m = getchar();
	while (m != '\n')
	{
		if (m >= 'a'&&m <= 'z' || m >= 'A'&&m <= 'Z')
		{
			a++;
		}
		else if (m >= '0'&&m <= '9')
		{
			b++;
		}
		else if (m == ' ')
		{
			c++;
		}
		else
		{
			d++;
		}
		m = getchar();
	}
	printf("Ӣ����ĸ��%d��,���ָ�����%d��,�ո�ĸ�����%d��,�����ַ��ĸ�����%d��\n", a, b, c, d);
	system("pause");
	return 0;
}