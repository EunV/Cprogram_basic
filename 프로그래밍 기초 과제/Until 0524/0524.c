#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rockScissorsPaper(void);
int winLoseDraw(int player, int opponent);

int main(void)
{
	int input;	// 사용자가 낼 것
	int cpu;	// 컴퓨터가 낼 것
	int result;	// 승패 판정

	srand((unsigned int)time(0));

	while (1)
	{
		do
		{
			printf("가위(1), 바위(2), 보(3) ,종료는 (0)을 입력 \n");
			scanf_s("%d", &input);
		} while (input < 0 || input >3);

		if (input == 0)
			break;

		cpu = rockScissorsPaper();
		result = winLoseDraw(input, cpu);

		printf("you : %d \t computer : %d \n", input, cpu);

		if (result == 1)
			puts("이겼습니다");
		else if (result == -1)
			puts("졌습니다");
		else
			puts("비겼습니다");
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