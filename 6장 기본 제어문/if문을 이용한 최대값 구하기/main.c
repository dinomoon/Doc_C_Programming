#include <stdio.h>

int main(void)
{
	// ����ڷκ��� �� ������ �Է¹޾� �� �� ���� ū ���� ����ϴ� ���α׷�
	// �����̹� ���
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