#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

int main()
{
	int arr[10];
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	int  j, arr1[10];//arr1Ϊ��Ų��ظ�Ԫ�ص�����
	int index = 0;//�±�
	//ð������
	for (i = 0; i < 10 - 1; i++)
	{
		for (j = 0; j < 10 - i - 1; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	arr1[0] = arr[0];
	for (i = 0; i < 10; i++)
	{
		if (arr[i] != arr[i - 1])//�����ǰԪ����ǰһ��Ԫ�ز���ȣ�������ŵ�arr1��
		{
			arr1[index++] = arr[i];

		}
	}
	for (i = 0; i < index; i++)
	{
		printf("%d", arr1[i]);
	}
	system("pause");
	return 0;
}