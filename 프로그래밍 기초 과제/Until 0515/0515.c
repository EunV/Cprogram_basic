#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random(int lower, int upper);

int main(void)
{
	int k;	//반복문 제어 변수
	int n;	//던질 횟수
	int x;	//함숫값을 저장할 변수
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;

	srand((unsigned int)time(0));

	printf("주사위를 던질 횟수를 입력. \n");
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
	printf("1 : %d회 \n2 : %d회\n3 : %d회\n", a, b, c);
	printf("4 : %d회 \n5 : %d회\n6 : %d회\n", d, e, f);
	return 0;
}

int random(int lower, int upper)
{
	int x; //난수 반환

	x = rand() % (upper - lower + 1) + lower;

	return x;
}