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
	printf("���� �Է�: ");
	scanf_s("%d", &a);

	int b;
	printf("2�� %d���� %d", a, multiple(a));
	return 0;
}