#include <stdio.h>

int main(void)
{
	// ������ �⺻����� 1000���̶�� �����ϰ�,
	// ���̰� 20�� �̸��� ������, ���, û�ҳ⿡ ���ؼ� ����� 20%����
	// 20�� �̻� ������ ������ ������ �ʴ´�.
	int base = 1000;
	int age, money;
	
	scanf_s("%d", &age);
	if (age < 20)
		money = base * 75 / 100;
	
	printf("�������: %d��", money);
	return 0;
}