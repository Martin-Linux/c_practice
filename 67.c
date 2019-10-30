#include<stdio.h>
#include<Windows.h>

void swap(int arr[],int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
int partition(int arr[], int low, int high)
{
	int pivotkey;
	pivotkey = arr[low];
	while (low < high)//��pivoekeyΪ����ý�飨���ᣩ�����������ķ��ں�ߣ�С�����ķ���ǰ��
	{
		while (low < high&&arr[high] >= pivotkey)
		{
			high--;
		}
		swap(arr, low, high);
		while (low < high&&arr[low] <= pivotkey)
		{
			low++;
		}
		swap(arr, low, high);
	}
	return low;
}
void Sort(int arr[], int low, int high)
{
	int pivot;
	if (low < high)
	{
		pivot = partition(arr, low, high);

		Sort(arr, low, pivot - 1);//�Ե��ӱ�ݹ�����
		Sort(arr, pivot + 1, high);//�Ը��ӱ�ݹ�����
	}
}
int main()
{
	int arr[] = { 1, 5, 6, 7, 8, 9, 5, 8, 3 };
	int low = 0;
	int high = sizeof(arr) / sizeof(arr[0]);
	Sort(arr, low, high-1);
	int i = 0;
	for (i = 0; i < high; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}