//�����ַ����е�k���ַ� 
#include<stdio.h>
#include<assert.h>
#include<Windows.h>
#pragma warning(disable:4996)

char *left_reverse(char *dest, const char *src, int n)
{
	int i = 0;
	assert(src != NULL);
	assert(dest != NULL);
	char *start = src;
	while (*(src + n) != '\0')  //������Ҫ��ת���ַ��ȷ���dest��
	{
		*dest++ = *(src + n);
		src++;
	}
	for (i = 0; i < n; i++)  //�ٽ���Ҫ��ת�ķ���dest��
	{
		*dest++ = *start++;
	}
	*dest = '\0';
	return dest;
}
int main()
{
	int n = 0;
	char q[20] = "0";
	char p[] = "abcdef";
	printf("%s\n", p);
	int len = sizeof(p) / sizeof(p[0])-1;
	while (1)
	{
		printf("������Ҫ��ת�ַ��ĸ�����\n");
		scanf("%d", &n);
		if (n <= len)
		{
			left_reverse(q, p, n);
			break;
		}
		else
		{
			printf("��������ַ���̫����\n");
		}
	}
	printf("%s\n", q);

	system("pause");
	return 0;
}