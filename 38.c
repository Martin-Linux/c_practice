//�˽�����ʮ�����໥ת��
#include<stdio.h>
#include<Windows.h>
#define N 100
#include<math.h>
void exchange(int n)
{
	int i = 0;
	int arr[N];
	while (n > 0)
	{
		arr[i] = n % 8;
		i++;
		n /= 8;
	}
	for (i--; i >= 0; i--)
	{
		printf("%d", arr[i]);
	}
}
int exchange1(int n)
{
	int sum = 0;
	int i = 0;
	while(n > 0)
	{
		sum += ((n % 10)*pow(8, i));
		n /= 10;
		i++;
	}
	return sum;
}
int main()
{
	int num1,num2;
	printf("������һλʮ���Ƶ���\n");
	scanf_s("%d", &num1);
	exchange(num1);
	printf("\n");
	printf("������һλ�˽��Ƶ���\n");
	scanf_s("%d", &num2);
	printf("%d", exchange1(num2));
	system("pause");
	return 0;
}