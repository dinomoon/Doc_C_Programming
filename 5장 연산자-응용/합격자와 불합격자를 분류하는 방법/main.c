#include <stdio.h>

int main(void)
{
	// 사용자로부터 cm단위의 키를 입력받아 키가 150cm 이상이면, '합격'이라고 출력
	// 그렇지 않으면 '불합격'이라고 출력하는 프로그램을 작성하세요.
	// 반드시 삼항 연산자를 사용하세요.

	int height;
	printf("키를 입력하세요.: ");
	scanf("%d", &height);

	// height >= 150 ? printf("합격") : printf("불합격");
	printf("결과: %s", height >= 150 ? "합격" : "불합격");
}