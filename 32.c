//����һ����ĸ�ж������ڼ��������ַ���ͬ���жϵڶ�����ĸ
#include<stdio.h>
#include<Windows.h>
#include<conio.h>
int main()
{
	char ch;
	printf("�������һ����ĸ��\n");
	while ((ch = _getche()) != 0)
	{
		printf("\n");
		switch (ch)
		{
		case 'M':
		case 'm':
			printf("Monday\n");
			break;
		case 'T':
		case 't':
			printf("������ڶ�����ĸ:\n");
			if ((ch == _getche()) == 'u' || ch == 'U')
			{
					printf("\nTuesday\n");
			 }
			else if (ch == 'h' || ch == 'H')
			{
					printf("\nThursday\n");
			 }
			else
			{
					printf("�������!");
			 }
			break;
		case 'W':
		case 'w':
			printf("Wednesday\n");
			break;
		case 'F':
		case 'f':
			printf("Friday\n");
			break;
		case 'S':
		case 's':
			printf("������ڶ�����ĸ\n");
			if ((ch = _getche()) == 'a' || ch == 'A')
			{
					printf("\nSaturday\n");
			 }
			else if (ch == 'U' || ch == 'u')
			{
					printf("\nSunday\n");
			 }
			else
			{
					printf("�������!\n");
			 }
			break;
		default:

			break;
		}
	}
	system("pause");
	return 0;
}