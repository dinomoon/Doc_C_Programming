#include <stdio.h>

int main(void)
{
	int Age = 0;
	char Name[32] = { 0 };

	printf("나이를 입력하세요. : ");
	scanf("%d%*c", &Age);
	printf("이름을 입력하세요. : ");
	gets(Name);

	printf("당신의 나이는 %d살이고 이름은 '%s'입니다.", Age, Name);
	return 0;
}