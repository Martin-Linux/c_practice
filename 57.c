//����һ�����飬 ʵ�ֺ���init������ʼ�����顢 ʵ��empty����������顢 ʵ��reverse���������������Ԫ�ص����á�Ҫ���Լ���ƺ����Ĳ���������ֵ
#include<stdio.h>
#include<Windows.h>

void init(int array[],int length)//��ʼ������
{
	int i, num;
	printf("��ʼ�����飬������10������:\n");
	for (i = 0; i < length; i++)
	{
		scanf_s("%d", &num);
		array[i] = num;	
	}
}
void empty(int array[],int length)//�������
{
	int i = 0;
	printf("������飺\n");
	for (i = 0; i < length; i++)
	{
		array[i] = 0;
	}
	for (i = 0; i < length; i ++ )
	{
		printf("%d ", array[i]);
	}
}
void reverse(int array[], int length)//��������
{
	int i, temp;
	printf("�������飺\n");
	for (i = 0; i < length/2; i++)
	{
		temp=array[i];
		array[i] = array[length - 1 - i];
		array[length - 1 - i] = temp;
	}
	for (i = 0; i < length; i++)
	{
		printf("%d ",array[i]);
	}
}
int main()
{
	int array[10] = { 0 };

	int length = sizeof(array) / sizeof(array[0]);
	init(array, length);
	
	reverse(array, length);
	printf("\n");
	empty(array, length);

	system("pause");
	return 0;
}