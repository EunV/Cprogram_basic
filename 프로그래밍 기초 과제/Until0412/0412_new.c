#include <stdio.h>
int main(void)
{
	int time;		//�ð�
	int n;			//��
	int i = 1;		//�ݺ�����
	int age = 0;	//����
	int sum = 0;	//��ݰ�
	int cost;		//�ܰ�

	printf("���� �ð��� �Է����ּ���.(0~23)");
	scanf_s("%d", &time);

	printf("���� �ο��� �Է�");
	scanf_s("%d", &n);

	if (time >= 17 && time <= 23)
	{
		cost = 10000;
		sum = cost * n;
		printf("�� ����� %d ���Դϴ�", sum);
	}

	else
	{
		while (i <= n)
		{
			printf("%d ��° ����� ���̸� �Է��ϼ��� \n", i);
			scanf_s("%d", &age);

			if (age < 3)
			{
				cost = 0;
				printf("����� %d�� �Դϴ�. \n", cost);
				sum += cost;
			}

			else if (12 < age && age < 65)
			{
				cost = 34000;
				printf("����� %d�� �Դϴ�. \n", cost);
				sum += cost;
			}

			else
			{
				cost = 25000;
				printf("����� %d�� �Դϴ� \n", cost);
				sum += cost;
			}
			i = i + 1;
		}

		printf("�� ������ %d ���Դϴ�. \n", sum);
	}
	return 0;
}