//ʵ��strcmp
#include<stdio.h>
#include<Windows.h>
#include<string.h>

int strcmp(char *str1, char *str2)
{
	if (str1 == NULL || str2 == NULL)
	{
		return -1;
	}
	while (*str1 == *str2&&*str1 != '\0'&&*str2 != '\0')
	{
		str1++;
		str2++;
	}
	if (*str1 == *str2)
	{
		return 0;     //��0��ʾ����ַ������
	}
	else if (*str1>*str1)
	{
		return 1;     //��1��ʾ*str1>*str2
	}
	else
	{
		return 2;      //��2��ʾ*str1<*str2
	}
}
int main()
{
	char str1[] = "abcdefef";
	char str2[] = "scjsacnasnc";
	
	printf("��-1��ʾ�����ַ������ǿգ���0��ʾ����ַ������,��1��ʾ*str1>*str2,��2��ʾ*str1<*str2:\n");
	printf("%d\n", strcmp(str1, str2));
	system("pause");
	return 0;

}