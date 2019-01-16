#include <stdio.h>
#define AMOUNT 11				//�¼� ��ȣ�� �迭�� ���� ���� ����ȭ

void seat_num(void);			//�¼� ���� ǥ��
void fail(void);				//���� �Ұ���
void success(int x, int y);		//���� ����

int main(void)
{
	int input;					//�Է�
	int prev;					//�Է��� ���� �ڸ�
	int next;					//�Է��� ������ �ڸ�
	int i;						//�����
	int count[AMOUNT] = { 0 };	//���� ����

	do
	{
		seat_num();

		for (i = 1; i < AMOUNT; i++)
			printf(" %d", count[i]);

		puts("");

		do
		{
			printf("������ �� �ڸ��� �չ�ȣ �Ǵ� �޹�ȣ�� �Է��ϼ���(1~10 , ����� 0) : ");
			scanf_s("%d", &input);
		} while (input < 0 || input>10);

		prev = input - 1;
		next = input + 1;

		if (input == 0)
			break;

		else if (input == 1)
		{
			if (count[1] == 0 && count[2] == 0) //1,2�� �¼��� ��� ����ִ� ���
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
			if (count[10] == 0 && count[9] == 0) //9,10�� �¼��� ��� ����ִ� ���
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
			if (count[input] == 1) //�Է��� ������ �ڸ��� ������� ���� ���
				fail();

			else
			{
				if (count[next] == 1 && count[prev] == 1) //���� ��� ������� ���� ���
					fail();

				if (count[next] == 0 || count[prev] == 0) //�� �� �ϳ��� ����ִ� ���
				{
					count[input] = 1;

					if (count[next] == 1)
					{
						count[prev] = 1;
						success(prev, input);
					}

					else if (count[prev] == 1 || (count[prev] == 0 && count[next] == 0)) //���ʸ�� ����ְų�, ���� ��ȣ�� �¼��� ����մ� ���
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
	printf("�¼� ��Ȳ: (0 : ���� ���� , 1 : ���� �Ұ���) \n");
	printf("---------------------\n");
	printf(" 1 2 3 4 5 6 7 8 9 10\n");
	printf("---------------------\n");
}

void fail(void)
{
	printf("\n\t*** ������ �Ұ����մϴ�.*** \n \n");
}

void success(int x, int y)
{
	printf("\n\t*** %d,%d�� �¼��� ���� �Ǿ����ϴ�.*** \n \n", x, y);
}