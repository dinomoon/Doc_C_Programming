#include <stdio.h>

int main(void)
{
	// 버스의 기본요금을 1000원이라고 가정하고,
	// 나이가 20세 미만인 영유아, 어린이, 청소년에 대해서 요금을 20%할인
	// 20세 이상 성인은 할인을 해주지 않는다.
	int base = 1000;
	int age, money;
	
	scanf_s("%d", &age);
	if (age < 20)
		money = base * 75 / 100;
	
	printf("최종요금: %d원", money);
	return 0;
}