#include <stdio.h>

int main(void)
{
	// 두 정수를 입력받아 평균을 계산해 출력하는 프로그램
	// 반드시 소수점 둘째 자리까지만 표시해야 하며, 변수는 2개만 선언합니다.
	int a, b;

	printf("두 정수를 입력하세요.: ");
	scanf("%d%d", &a, &b);

	printf("AVG: %.2f", (a + b) / 2.0);
}