#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random(int lower, int upper);

int main(void)
{
	int k;	//�ݺ��� ���� ����
	int n;	//���� Ƚ��
	int x;	//�Լ����� ������ ����
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;

	srand((unsigned int)time(0));

	printf("�ֻ����� ���� Ƚ���� �Է�. \n");
	scanf_s("%d", &n);

	for (k = 1; k <= n; k++)
	{
		x = random(1, 6);

		if (x == 1)
			a++;
		if (x == 2)
			b++;
		if (x == 3)
			c++;
		if (x == 4)
			d++;
		if (x == 5)
			e++;
		if (x == 6)
			f++;
	}
	printf("1 : %dȸ \n2 : %dȸ\n3 : %dȸ\n", a, b, c);
	printf("4 : %dȸ \n5 : %dȸ\n6 : %dȸ\n", d, e, f);
	return 0;
}

int random(int lower, int upper)
{
	int x; //���� ��ȯ

	x = rand() % (upper - lower + 1) + lower;

	return x;
}