#include <stdio.h>

int main(void)
{
	// 버스의 기본요금 1000원
	// 연령별로 분류하여 별도의 할인율 적용하여 최종요금 계산하기
	// if else문을 두 번 중첩하여 2분할 방식으로 분류하여 구현하기
	// 0-3세 100%
	// 4-13세 50%
	// 14-19세 25%
	// 20세 이상 0%

	int nFee = 1000;
	double nRate;
	int Age;

	scanf_s("%d", &Age);

	if (Age < 14)
	{
		if (Age >= 4)
			nRate = 0.5;
		else
			nRate = 0.0;
	}
	else
	{
		if (Age < 20)
			nRate = 0.75;
		else
			nRate = 1.0;
	}
		
	printf("최종요금: %d원", (int)(nFee * nRate) );
	return 0;
}