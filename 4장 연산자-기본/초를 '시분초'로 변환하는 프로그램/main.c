#include <stdio.h>

int main(void)
{
	// �ʸ� '��:��:��'�� ��ȯ�ϴ� ���α׷�
	// ����ڷκ��� ������ �ʸ� �Է¹޾� '��:��:��' �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	// �� �ڸ� ������ ��� �տ� 0�� �ٿ� ����ؾ� �մϴ�.

	int hour, min, sec, second;
	printf("�ʸ� �Է��ϼ���.: ");
	scanf("%d", &second);

	hour = second / 3600;
	min = (second % 3600) / 60;
	sec = (second % 3600) % 60;

	printf("%d�ʴ� %02d�ð� %02d�� %02d���Դϴ�.", second, hour, min, sec);
}