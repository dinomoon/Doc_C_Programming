#include <stdio.h>

int main(void)
{
	int nMax = 0;
	int a, b, c;

	// ���⿡ �ڵ带 �����ϼ���.
	scanf("%d%d%d", &a, &b, &c);
	/*
	a > b ? (nMax = a) : (nMax = b);
	a > c ? (nMax = a) : (nMax = c);
	b > c ? (nMax = b) : (nMax = c);
	*/

	nMax = a;
	nMax = b > nMax ? b : nMax;
	nMax = c > nMax ? c : nMax;

	printf("MAX: %d\n", nMax);
	return 0;
}