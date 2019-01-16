#include <stdio.h>
#define AMOUNT 11				//좌석 번호와 배열의 원소 숫자 동일화

void seat_num(void);			//좌석 정보 표시
void fail(void);				//예약 불가능
void success(int x, int y);		//예약 성공

int main(void)
{
	int input;					//입력
	int prev;					//입력의 왼쪽 자리
	int next;					//입력의 오른쪽 자리
	int i;						//제어변수
	int count[AMOUNT] = { 0 };	//예약 상태

	do
	{
		seat_num();

		for (i = 1; i < AMOUNT; i++)
			printf(" %d", count[i]);

		puts("");

		do
		{
			printf("인접한 두 자리의 앞번호 또는 뒷번호를 입력하세요(1~10 , 종료는 0) : ");
			scanf_s("%d", &input);
		} while (input < 0 || input>10);

		prev = input - 1;
		next = input + 1;

		if (input == 0)
			break;

		else if (input == 1)
		{
			if (count[1] == 0 && count[2] == 0) //1,2번 좌석이 모두 비어있는 경우
			{
				count[1] = 1;
				count[2] = 1;
				success(1, 2);
			}
			else
				fail();
		}

		else if (input == 10)
		{
			if (count[10] == 0 && count[9] == 0) //9,10번 좌석이 모두 비어있는 경우
			{
				count[10] = 1;
				count[9] = 1;
				success(9, 10);
			}
			else
				fail();
		}

		else
		{
			if (count[input] == 1) //입력한 숫자의 자리가 비어있지 않은 경우
				fail();

			else
			{
				if (count[next] == 1 && count[prev] == 1) //양쪽 모두 비어있지 않은 경우
					fail();

				if (count[next] == 0 || count[prev] == 0) //둘 중 하나라도 비어있는 경우
				{
					count[input] = 1;

					if (count[next] == 1)
					{
						count[prev] = 1;
						success(prev, input);
					}

					else if (count[prev] == 1 || (count[prev] == 0 && count[next] == 0)) //양쪽모두 비어있거나, 다음 번호의 좌석이 비어잇는 경우
					{
						count[next] = 1;
						success(input, next);
					}
				}
			}
		}
	} while (input != 0);

	return 0;
}

void seat_num(void)
{
	printf("좌석 현황: (0 : 예매 가능 , 1 : 에매 불가능) \n");
	printf("---------------------\n");
	printf(" 1 2 3 4 5 6 7 8 9 10\n");
	printf("---------------------\n");
}

void fail(void)
{
	printf("\n\t*** 예약이 불가능합니다.*** \n \n");
}

void success(int x, int y)
{
	printf("\n\t*** %d,%d번 좌석이 예약 되었습니다.*** \n \n", x, y);
}