#include <stdio.h>

int main(void)
{
	// ������ �⺻��� 1000��
	// ���ɺ��� �з��Ͽ� ������ ������ �����Ͽ� ������� ����ϱ�
	// if else���� �� �� ��ø�Ͽ� 2���� ������� �з��Ͽ� �����ϱ�
	// 0-3�� 100%
	// 4-13�� 50%
	// 14-19�� 25%
	// 20�� �̻� 0%

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
		
	printf("�������: %d��", (int)(nFee * nRate) );
	return 0;
}