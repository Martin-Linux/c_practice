//��ŵ�����ݹ飩
#include<stdio.h>
#include<Windows.h>

void hanoi(int n, char x, char y, char z)
{
	if (n == 1)
	{
		printf("Բ�̱�� %d���� %c �ƶ��� %c \n", n, x, z);
	}
	else
	{
		hanoi(n - 1, x, z, y);
		printf("Բ�̱�� %d: �� %c �ƶ��� %c\n", n, x, z);
		hanoi(n - 1, y, x, z);
	}
}
int main()
{
	char x = 'A';
	char y = 'B';
	char z = 'C';//ABC������������

	int n;//Բ����
	printf("������Բ�̵ĸ���:\n");
	scanf_s("%d", &n);
	hanoi(n, x, y, z);
	system("pause");
	return 0;

}