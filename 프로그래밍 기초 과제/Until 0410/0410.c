#include <stdio.h>
int main(void)
{
	char wheather;
	int temp;
	int rainfall;

	printf("������ �Է����ּ��� \n");
	printf("����(c) , ��(r) , ��(s) \n");
	scanf_s("%c", &wheather);

	switch (wheather)
	{
	case 'c':
		printf("����� �Է��ϼ��� : ");
		scanf_s("%d", &temp);

		if (temp >= 30)
			printf("����� ������ ������. \n");
		else if (temp <= 0)
			printf("�߿�� ������ ������. \n");
		else
			printf("���� �� �ϱ� ���� ���̴� ������ ������. \n");
		break;

	case 'r':
		printf("�������� �Է��ϼ��� : ");
		scanf_s("%d", &rainfall);
		{
			if (rainfall >= 30)
				printf("�� ���� ���� ������ ������. \n");
			else if (rainfall < 0)
				printf("�������� Ȯ���ϰ� �ٽ� �Է��ϼ���. \n");
			else
				printf("���Ҹ��� ������ ������ ������");
		}
		break;

	case 's':
		printf("���� �̲������ ������ ������. \n");
		break;

	default:
		if (wheather >= 'A' && wheather <= 'Z')
			puts("�빮�ڰ� �ƴ� �ҹ��ڸ� �Է��ϼ��� (r,c,s)");
		else
			puts("�߸��� �Է� ���Դϴ�. (r,c,s) �� �ϳ��� �Է��ϼ���");
	}

	return 0;
}