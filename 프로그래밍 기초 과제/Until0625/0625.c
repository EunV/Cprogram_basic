#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUBJECT 5
#define STUDENT 10

int random(int lower, int upper);

int main(void)
{
	int score[SUBJECT][STUDENT];
	double avgClas[SUBJECT];		//각 과목의 평균
	double avgStudent[STUDENT];		//각 학생의 평균
	int topScoreClas[5];
	int clastotal, stutotal;

	int clas;
	int student;

	/*점수 생성*/
	for (clas = 0; clas < SUBJECT; clas++)
	{
		for (student = 0; student < STUDENT; student++)
		{
			score[clas][student] = random(1, 100);
		}
	}

	/* 과목별 최고 점수*/
	for (clas = 0; clas < SUBJECT; clas++)
	{
		topScoreClas[clas] = score[clas][0];
		for (student = 1; student < STUDENT; student++)
		{
			if (topScoreClas[clas] < score[clas][student])
				topScoreClas[clas] = score[clas][student];
		}
	}

	/* 과목 별 평균*/
	for (clas = 0; clas < SUBJECT; clas++)
	{
		clastotal = 0;
		for (student = 0; student < STUDENT; student++)
		{
			clastotal += score[clas][student];
		}
		avgClas[clas] = (double)clastotal / STUDENT;
	}

	/*학생 별 평균*/
	for (student = 0; student < STUDENT; student++)
	{
		stutotal = 0;
		for (clas = 0; clas < SUBJECT; clas++)
		{
			stutotal += score[clas][student];
		}
		avgStudent[student] = (double)stutotal / SUBJECT;
	}

	/* 점수 출력 */
	printf("학생	|	0	1	2	3	4	5	6	7	8	9	|과평  최고\n");
	printf("-----------------------------------------------------------------------------------------------------------\n");

	for (clas = 0; clas < SUBJECT; clas++)
	{
		printf("과목%d	|", clas);
		for (student = 0; student < STUDENT; student++)
		{
			printf("	%2d", score[clas][student]);
		}
		printf("	|");
		printf("%3.1lf  %3d", avgClas[clas], topScoreClas[clas]);
		printf("\n");
	}

	printf("-----------------------------------------------------------------------------------------------------------\n");
	printf("학평	|");
	for (student = 0; student < STUDENT; student++)
	{
		printf("	%.1lf ", avgStudent[student]);
	}
	puts("\n");
	return 0;
}

int random(int lower, int upper)
{
	static int check = 0;
	int r;

	if (check == 0)
	{
		srand((unsigned int)time(0));
		check = 1;
	}

	r = rand() % (upper - lower + 1) + lower;

	return r;
}