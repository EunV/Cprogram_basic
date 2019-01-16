#include <stdio.h>
int main(void)
{
	int time, number, age;
	int i;
	int cost, sum = 0;

	printf("현재 시간을 입력해주세요.(0~23) : ");
	scanf_s("%d", &time);

	printf("인원수 입력 : ");
	scanf_s("%d", &number);

	for (i = 1; i <= number; i++)
	{
		printf("%d 번째 사람의 나이를 입력하세요 : ", i);
		scanf_s("%d", &age);

		/*3세 이하*/
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

		/*4~12 또는 65세이상*/
		else
		{
			if (time >= 0 && time <= 17)
				cost = 25000;
			else
				cost = 10000;
		}
		printf("요금은 %d원 입니다 \n", cost);
		sum += cost;
	}

	printf("총 입장료는 %d 원입니다. \n", sum);
	return 0;
}