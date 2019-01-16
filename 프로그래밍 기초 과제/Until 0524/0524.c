#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rockScissorsPaper(void);
int winLoseDraw(int player, int opponent);

int main(void)
{
	int input;	// ����ڰ� �� ��
	int cpu;	// ��ǻ�Ͱ� �� ��
	int result;	// ���� ����

	srand((unsigned int)time(0));

	while (1)
	{
		do
		{
			printf("����(1), ����(2), ��(3) ,����� (0)�� �Է� \n");
			scanf_s("%d", &input);
		} while (input < 0 || input >3);

		if (input == 0)
			break;

		cpu = rockScissorsPaper();
		result = winLoseDraw(input, cpu);

		printf("you : %d \t computer : %d \n", input, cpu);

		if (result == 1)
			puts("�̰���ϴ�");
		else if (result == -1)
			puts("�����ϴ�");
		else
			puts("�����ϴ�");
	}
	return 0;
}

int rockScissorsPaper(void)
{
	int computer;

	computer = rand() % 3 + 1;
	return computer;
}

int winLoseDraw(int player, int opponent)
{
	if (player > opponent)
	{
		if (player - opponent == 2)
			return -1;
		else
			return 1;
	}

	else if (player < opponent)
	{
		if (opponent - player == 2)
			return 1;
		else
			return -1;
	}

	else
		return 0;
}