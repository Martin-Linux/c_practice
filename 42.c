//����һ������n�����������У�������a�������еĵ�һ�γ����ǵڼ�����
#include<stdio.h>
#include<windows.h>
int Find(int n, int arr[], int key)
{
	int index = -1;
	int i; 
	for (i = 0; i<n; i++)
	{
		if (arr[i] == key)
		{
			index = i + 1;
			break;
		}
	}
	return index;
}
int main()
{
	int n, key;
	int i;
	int arr[10000];
	printf("��������������Ԫ�صĸ���:");
	scanf_s("%d", &n);
	for (i = 0; i<n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("������Ҫ���ҵ�Ԫ��:");
	scanf_s("%d", &key);
	printf("%d\n", Find(n, arr, key));
	system("pause");
	return 0;

}
