#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{

	int min;		//���� ��
	int max;		//���� ��
	int tries = 1;  //�õ�Ƚ��
	int input;		//���� ��
	int answer;		//��

	printf("���� ���߱� �����Դϴ�. \n");
	printf("������ ���� ���� �Է��ϼ���.\n");
	scanf_s("%d", &min);
	do
	{
		printf("������ ���� ���� �Է��ϼ���. \n");
		scanf_s("%d", &max);

	} while (min > max);

	srand((unsigned int)time(0));
	answer = rand() % (max - min + 1) + min;

	do
	{
		do
		{
			printf("%d ��° �õ��Դϴ� %d~%d ������ ������ �Է� \n", tries, min, max);
			scanf_s("%d", &input);

		} while (input<min || input>max);



		if (input < answer)
		{
			printf("������ %d ���� Ů�ϴ�. \n", input);
			tries++;
		}

		else if (input > answer)
		{
			printf("������ %d���� �۽��ϴ�. \n", input);
			tries++;
		}

		else
			printf("�����մϴ�. ������ %d�Դϴ�. \n", answer);

	} while ((input != answer));

	return 0;
}