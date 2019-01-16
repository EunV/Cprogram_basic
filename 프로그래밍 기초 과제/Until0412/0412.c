#include <stdio.h>
int main(void)
{
	int time;		//시간
	int n;			//인원수
	int i = 1;		//순서
	int age = 0;	//나이
	int sum = 0;	//요금계
	int cost;		//단가

	printf("현재 시간을 입력해주세요.(0~23)");
	scanf_s("%d", &time);

	printf("가족 인원수 입력");
	scanf_s("%d", &n);


	while (i <= n)
	{
		printf("%d 번째 사람의 나이를 입력하세요 \n", i);
		scanf_s("%d", &age);

		if (age < 3)
			cost = 0;
		/*13~64*/

		else if (age > 12 && age < 65)
			printf("요금은 %d원 입니다. \n", cost);
			sum += cost;
		}

		else if (age>12 && age<65)
		{
			if (time >=0 && time <= 17)
			{
				cost = 34000;
				printf("요금은 %d원 입니다. \n", cost);
				sum += cost;
			}

			else
			{
				cost = 10000;
				printf("요금은 %d원 입니다. \n", cost);
				sum += cost;
			}
		}
		
		else
		{
			if (time >= 0 && time <= 17)
			{
				cost = 25000;
				printf("요금은 %d원 입니다 \n", cost);
				sum += cost;
			}

			else
			{
				cost = 10000;
				printf("요금은 %d원 입니다 \n", cost);
				sum += cost;
			}
		}

		i = i + 1;

	}

	printf("총 입장료는 %d 원입니다. \n", sum);

	return 0;
}