/*��һ����ά����.
�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
�������������в���һ�������Ƿ���ڡ�
ʱ�临�Ӷ�С��O(N)
���飺
1 2 3
2 3 4
3 4 5

1 3 4
2 4 5
4 5 6

1 2 3
4 5 6
7 8 9*/
#include<stdio.h>
#include<Windows.h>
#define N 3
#pragma warning(disable:4996)
int Find(int a[N][N], int row, int col)
{
	int key;
	printf("������Ҫ���ҵ�����\n");
	scanf("%d", &key);
	int row1 = row - 1;
	int col1 = 0;
	while (row1 < row&&col1 < col)
	{
		if (a[row1][col1] == key)
		{
			return 1;
			break;
		}
		else
		{
			if (a[row1][col1]>key)
			{
				row1--;
			}
			else
			{
				col1++;
			}
		}
	}
	return -1;

}
int main()
{
	int a[N][N] = { { 1, 2, 3 }, { 2, 3, 4 }, { 3, 4, 5 } };
	printf("���������1����ʾ�ҵ��ˣ��������-1����ʾû�ҵ���\n%d\n", Find(a, N, N));

	system("pause");
	return 0;
}