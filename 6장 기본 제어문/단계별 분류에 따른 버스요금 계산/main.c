#include <stdio.h>

int main(void)
{
	// 버스의 기본요금 1000원
	// 연령별로 분류하여 별도의 할인율 적용하여 최종요금 계산하기

	// 반드시다중 if문을 사용하여 구현하기

	// 0-3세 100%
	// 4-13세 50%
	// 14-19세 25%
	// 20세 이상 0%
	// 65세 이상 100%

	int nFee = 1000;
	double nRate;
	int Age;

	scanf_s("%d", &Age);
	if (Age >= 65)
		nRate = 0.0;
	else if (Age >= 20)
		nRate = 1.0;
	else if (Age >= 14)
		nRate = 0.75;
	else if (Age >= 4)
		nRate = 0.5;
	else
		nRate = 0.0;

	printf("최종요금: %d원", (int)(nFee * nRate));
	return 0;
}