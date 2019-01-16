#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int min, max;
	int tries;
	int input, answer;

	printf("숫자 맞추기 게임입니다. \n");
	printf("난수의 하한 값을 입력하세요.\n");
	scanf_s("%d", &min);

	do
	{
		printf("난수의 상한 값을 입력하세요. \n");
		scanf_s("%d", &max);
	} while (min > max);

	srand((unsigned int)time(0));
	answer = rand() % (max - min + 1) + min;

	while (1)
	{
		do
		{
			printf("%d번째 시도 입니다 : ", tries);
			scanf_s("%d", &input);
		} while (input > max || input < min);

		if (input > answer)
			printf("%d보다 작습니다\n", input);
		else if (input < answer)
			printf("%d보다 큽니다\n", input);
		else
		{
			puts("축하합니다 정답입니다");
			break;
		}
		tries++;
	}
	return 0;
}