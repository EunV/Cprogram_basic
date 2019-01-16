#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int min, max;
	int tries;
	int input, answer;

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

	while (1)
	{
		do
		{
			printf("%d��° �õ� �Դϴ� : ", tries);
			scanf_s("%d", &input);
		} while (input > max || input < min);

		if (input > answer)
			printf("%d���� �۽��ϴ�\n", input);
		else if (input < answer)
			printf("%d���� Ů�ϴ�\n", input);
		else
		{
			puts("�����մϴ� �����Դϴ�");
			break;
		}
		tries++;
	}
	return 0;
}