#include <stdio.h>
int main(void)
{
	while (1)
	{
		int n;
		int i;
		int result = 1;

		printf("Factorial ����� ���� ���� �Է�: ");
		scanf_s("%d", &n);

		for (i = 1; i <= n; i++)
			result *= i;
		printf("%d!= %d\n", n, result);
	}
	return 0;
}