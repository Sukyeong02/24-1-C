#include <stdio.h>

int multiple(int n)
{
	if (n == 1)
		return 2;
	else
		return 2 * multiple(n - 1);
}

int main(void)
{
	int a;
	printf("정수 입력: ");
	scanf_s("%d", &a);

	int b;
	printf("2의 %d승은 %d", a, multiple(a));
	return 0;
}