//һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�
#include<stdio.h>
#include<Windows.h>
#include<math.h>
int main()
{
	int x, y, i;
	
	for (i = 1; i < 100000; i++)
	{

		x = sqrt(i + 100);
		y = sqrt(i + 268);
		if (i + 100 == x*x && y*y == i + 268)
		{
			printf("������ǣ�%d\n", i);
		}
	}

	system("pause");
	return 0;
}