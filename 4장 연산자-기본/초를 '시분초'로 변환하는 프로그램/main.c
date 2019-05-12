#include <stdio.h>

int main(void)
{
	// 초를 '시:분:초'로 변환하는 프로그램
	// 사용자로부터 정수로 초를 입력받아 '시:분:초' 형식으로 출력하는 프로그램을 작성하시오.
	// 한 자리 숫자인 경우 앞에 0을 붙여 출력해야 합니다.

	int hour, min, sec, second;
	printf("초를 입력하세요.: ");
	scanf("%d", &second);

	hour = second / 3600;
	min = (second % 3600) / 60;
	sec = (second % 3600) % 60;

	printf("%d초는 %02d시간 %02d분 %02d초입니다.", second, hour, min, sec);
}