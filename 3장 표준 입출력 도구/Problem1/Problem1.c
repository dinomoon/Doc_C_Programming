#include <stdio.h>

int main(void)
{
	int Age = 0;
	char Name[32] = { 0 };

	printf("���̸� �Է��ϼ���. : ");
	scanf("%d%*c", &Age);
	printf("�̸��� �Է��ϼ���. : ");
	gets(Name);

	printf("����� ���̴� %d���̰� �̸��� '%s'�Դϴ�.", Age, Name);
	return 0;
}