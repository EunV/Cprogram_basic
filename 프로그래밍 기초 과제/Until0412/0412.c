#include <stdio.h>
int main(void)
{
	int time;		//�ð�
	int n;			//�ο���
	int i = 1;		//����
	int age = 0;	//����
	int sum = 0;	//��ݰ�
	int cost;		//�ܰ�

	printf("���� �ð��� �Է����ּ���.(0~23)");
	scanf_s("%d", &time);

	printf("���� �ο��� �Է�");
	scanf_s("%d", &n);


	while (i <= n)
	{
		printf("%d ��° ����� ���̸� �Է��ϼ��� \n", i);
		scanf_s("%d", &age);

		if (age < 3)
			cost = 0;
		/*13~64*/

		else if (age > 12 && age < 65)
			printf("����� %d�� �Դϴ�. \n", cost);
			sum += cost;
		}

		else if (age>12 && age<65)
		{
			if (time >=0 && time <= 17)
			{
				cost = 34000;
				printf("����� %d�� �Դϴ�. \n", cost);
				sum += cost;
			}

			else
			{
				cost = 10000;
				printf("����� %d�� �Դϴ�. \n", cost);
				sum += cost;
			}
		}
		
		else
		{
			if (time >= 0 && time <= 17)
			{
				cost = 25000;
				printf("����� %d�� �Դϴ� \n", cost);
				sum += cost;
			}

			else
			{
				cost = 10000;
				printf("����� %d�� �Դϴ� \n", cost);
				sum += cost;
			}
		}

		i = i + 1;

	}

	printf("�� ������ %d ���Դϴ�. \n", sum);

	return 0;
}