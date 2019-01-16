#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{

	int min;		//하한 값
	int max;		//상한 값
	int tries = 1;  //시도횟수
	int input;		//추측 값
	int answer;		//답

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

	do
	{
		do
		{
			printf("%d 번째 시도입니다 %d~%d 사이의 추측값 입력 \n", tries, min, max);
			scanf_s("%d", &input);

		} while (input<min || input>max);



		if (input < answer)
		{
			printf("정답은 %d 보다 큽니다. \n", input);
			tries++;
		}

		else if (input > answer)
		{
			printf("정답은 %d보다 작습니다. \n", input);
			tries++;
		}

		else
			printf("축하합니다. 정답은 %d입니다. \n", answer);

	} while ((input != answer));

	return 0;
}