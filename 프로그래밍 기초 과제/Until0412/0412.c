#include <stdio.h>
int main(void)
{
	int time, number, age;
	int i;
	int cost, sum = 0;

	printf("���� �ð��� �Է����ּ���.(0~23) : ");
	scanf_s("%d", &time);

	printf("�ο��� �Է� : ");
	scanf_s("%d", &number);

	for (i = 1; i <= number; i++)
	{
		printf("%d ��° ����� ���̸� �Է��ϼ��� : ", i);
		scanf_s("%d", &age);

		/*3�� ����*/
		if (age < 3)
			cost = 0;
		/*13~64*/
		else if (age > 12 && age < 65)
		{
			if (time >= 0 && time <= 17)
				cost = 34000;
			else
				cost = 10000;
		}

		/*4~12 �Ǵ� 65���̻�*/
		else
		{
			if (time >= 0 && time <= 17)
				cost = 25000;
			else
				cost = 10000;
		}
		printf("����� %d�� �Դϴ� \n", cost);
		sum += cost;
	}

	printf("�� ������ %d ���Դϴ�. \n", sum);
	return 0;
}