#include <stdio.h>
int main2(void)
{
	int a, b;

	printf("두 개의 정수를 입력하세요: ");
	scanf_s("%d %d", &a, &b);

	int dan1, dan2;

	if (a < b)
	{
		dan1 = a;
		dan2 = b;
	}
	else
	{
		dan1 = b;
		dan2 = a;
	}
	for (int i = dan1; i <= dan2; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}