//С�����
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#pragma warning(disable:4996)
char s[10100], ss[10100];
int a[10100], b[10100];
int len;

void Add()     //�Զ��庯��"jia"
{
	int l1 = strlen(s);     //"strlen"��һ�������ַ������ȵĺ��� 
	int l2 = strlen(ss);    //������������ַ����ĳ��ȸ�ֵ��l1,l2
	if (l1 > l2)
		len = l1;      //��len��ֵΪl1,l2�д���Ǹ� 
	else
		len = l2;
	//		for (int i = 0 ; i <= len ; i++)  //���㣨����forѭ������������memset��Ϊ���ַ������� �� 
	//			a[i] = b[i] = c[i] = 0;
	memset(a, 0, sizeof(a));    //����too(ֻ�����㣬���ܸɱ��) 
	memset(b, 0, sizeof(b));    //�������㺯�����ַ����� 
	//����forѭ���ǽ�����������ַ���������
	for (int i = l1 - 1; i >= 0; i--)    //�ٽ��ַ�������ַ�ת��Ϊ���ָ�ֵ��a,b�������� 
		a[l1 - i - 1] = s[i] - '0';        //��Ϊʲô����Ҫ���ַ������أ�
	for (int i = l2 - 1; i >= 0; i--)    //��Ϊ����̫�����κ����ͱ������治�� 
		b[l2 - i - 1] = ss[i] - '0';       //ΪʲôҪ���ַ�����������ֵ�أ� 
	//��Ϊ�����������һλһλ����ģ���Ҫ�漰��λ�� 
	for (int i = 0; i < len; i++)
	{
		a[i] = a[i] + b[i];    //���� 
		a[i + 1] += a[i] / 10;    //���н�λ���ں�һλ�ϼ��� 
		a[i] = a[i] % 10;      //ԭ����һλ������λ�˵� 
	}
	if (a[len] != 0) len++;    //����н�λ�Ͷ���ʾһλ����仰����Ҫ�� 
	for (int i = len - 1; i >= 0; i--)  //������ 
		printf("%d", a[i]);
	printf("\n");
}                              //�߾��ȼӷ��㶮����

int main()
{
	printf("�߾��ȼӷ�(By STY)\n\n");
	printf("�˳��밴��Ctrl+Z��(�ڼ�����)�������س���ллʹ�ã�\n");
	printf("�������������֣�\n");
	printf("���֣�(�ÿո����)\n");
	while (scanf("%s%s", s, ss) != EOF)
	{
		printf("\n�����\n");
		Add();     //���ø߾��ȼӷ�����
		printf("\n\n");
		printf("�߾��ȼӷ�(By STY)\n\n");
		printf("�˳��밴��Ctrl+Z��(�ڼ�����)�������س���ллʹ�ã�\n");
		printf("�������������֣�\n");
		printf("���֣�(�ÿո����)\n");
	}
	return 0;
}
