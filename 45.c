//��������Ϸ
#include<stdio.h>
#include<Windows.h>
#include<time.h>
void menu()
{
	printf("#####################\n");
	printf("##      1.play     ##\n");
	printf("###     0.exit     ##\n");
	printf("#####################\n");
}
void game()
{
	int i = 0;
	int ret = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("��������Ҫ�µ�����\n");
		scanf_s("%d", &i);
		if (ret > i)
		{
			printf("���С�ˣ�\n");
		}
		else if (ret < i)
		{
			printf("��´��ˣ�\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//���������
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ������\n");
			break;
		default :
			printf("��������!���������룺\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}