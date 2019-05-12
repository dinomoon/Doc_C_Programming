#include <stdio.h>

int main(void)
{
	// 사용자로부터 세 정수를 입력받아 그 중 가장 큰 수를 출력하는 프로그램
	// 서바이벌 방식
	int nMax = 0, nInput = 0;

	scanf_s("%d", &nMax);

	scanf_s("%d", &nInput);
	if (nInput > nMax)
		nMax = nInput;

	scanf_s("%d", &nInput);
	if (nInput > nMax)
		nMax = nInput;

	printf("MAX: %d", nMax);
	return 0;
}