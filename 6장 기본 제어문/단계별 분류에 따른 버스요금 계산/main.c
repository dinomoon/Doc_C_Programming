#include <stdio.h>

int main(void)
{
	// ������ �⺻��� 1000��
	// ���ɺ��� �з��Ͽ� ������ ������ �����Ͽ� ������� ����ϱ�

	// �ݵ�ô��� if���� ����Ͽ� �����ϱ�

	// 0-3�� 100%
	// 4-13�� 50%
	// 14-19�� 25%
	// 20�� �̻� 0%
	// 65�� �̻� 100%

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

	printf("�������: %d��", (int)(nFee * nRate));
	return 0;
}