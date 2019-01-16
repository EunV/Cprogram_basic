#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUBJECT 5
#define STUDENT 10

int random(int lower, int upper);

int main(void)
{
	int score[SUBJECT][STUDENT];
	double avgClas[SUBJECT];		//�� ������ ���
	double avgStudent[STUDENT];		//�� �л��� ���
	int topScoreClas[5];
	int clastotal, stutotal;

	int clas;
	int student;

	/*���� ����*/
	for (clas = 0; clas < SUBJECT; clas++)
	{
		for (student = 0; student < STUDENT; student++)
		{
			score[clas][student] = random(1, 100);
		}
	}

	/* ���� �ְ� ����*/
	for (clas = 0; clas < SUBJECT; clas++)
	{
		topScoreClas[clas] = score[clas][0];
		for (student = 1; student < STUDENT; student++)
		{
			if (topScoreClas[clas] < score[clas][student])
				topScoreClas[clas] = score[clas][student];
		}
	}

	/* ���� �� ���*/
	for (clas = 0; clas < SUBJECT; clas++)
	{
		clastotal = 0;
		for (student = 0; student < STUDENT; student++)
		{
			clastotal += score[clas][student];
		}
		avgClas[clas] = (double)clastotal / STUDENT;
	}

	/*�л� �� ���*/
	for (student = 0; student < STUDENT; student++)
	{
		stutotal = 0;
		for (clas = 0; clas < SUBJECT; clas++)
		{
			stutotal += score[clas][student];
		}
		avgStudent[student] = (double)stutotal / SUBJECT;
	}

	/* ���� ��� */
	printf("�л�	|	0	1	2	3	4	5	6	7	8	9	|����  �ְ�\n");
	printf("-----------------------------------------------------------------------------------------------------------\n");

	for (clas = 0; clas < SUBJECT; clas++)
	{
		printf("����%d	|", clas);
		for (student = 0; student < STUDENT; student++)
		{
			printf("	%2d", score[clas][student]);
		}
		printf("	|");
		printf("%3.1lf  %3d", avgClas[clas], topScoreClas[clas]);
		printf("\n");
	}

	printf("-----------------------------------------------------------------------------------------------------------\n");
	printf("����	|");
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