//��ת

#include<stdio.h>
#include<Windows.h>
#include<string.h>

void reverse(char *str)
{
	char *p = str + strlen(str) - 1;//���һ���ַ��ĵ�ַ
	char temp;
	while (str < p)
	{
		temp = *str;
		*str++ = *p;
		*p-- = temp;
		
	}
}
int main()
{
	char str[30] = "abcdsef";
	printf("��תǰ��%s\n", str);
	reverse(str);
	printf("��ת��%s\n", str);
	system("pause");
	return 0;
}