//��һ��3 * 3����Խ���Ԫ��֮��
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	int arr[3][3];
	printf("������һ����λ����\n");
	int i, j;
	int sum = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		sum += arr[i][i];
	}
	printf("�Խ���֮���ǣ�%d\n", sum);
	system("pause");
	return 0;
}