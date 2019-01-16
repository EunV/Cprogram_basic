#include <stdio.h>
int main(void)
{
	char wheather;
	int temp;
	int rainfall;

	printf("날씨를 입력해주세요 \n");
	printf("맑음(c) , 비(r) , 눈(s) \n");
	scanf_s("%c", &wheather);

	switch (wheather)
	{
	case 'c':
		printf("기온을 입력하세요 : ");
		scanf_s("%d", &temp);

		if (temp >= 30)
			printf("더우니 나가지 마세요. \n");
		else if (temp <= 0)
			printf("추우니 나가지 마세요. \n");
		else
			printf("집안 일 하기 좋은 날이니 나가지 마세요. \n");
		break;

	case 'r':
		printf("강수량을 입력하세요 : ");
		scanf_s("%d", &rainfall);
		{
			if (rainfall >= 30)
				printf("비가 많이 오니 나가지 마세요. \n");
			else if (rainfall < 0)
				printf("강수량을 확인하고 다시 입력하세요. \n");
			else
				printf("빗소리를 들으며 집에서 쉬세요");
		}
		break;

	case 's':
		printf("길이 미끄러우니 나가지 마세요. \n");
		break;

	default:
		if (wheather >= 'A' && wheather <= 'Z')
			puts("대문자가 아닌 소문자를 입력하세요 (r,c,s)");
		else
			puts("잘못된 입력 값입니다. (r,c,s) 중 하나를 입력하세요");
	}

	return 0;
}