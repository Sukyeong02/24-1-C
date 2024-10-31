#include <stdio.h>
int main5(void)
{
	int n;
	int i;
	int count = 0;

	printf("10개의 소수 출력: ");
	
	for (n = 2; count < 10; n++)
	{
		for (i = 2; i <= n; i++)
		{
				if (i == n)
				{
					printf("%d ", n);
					count++;
				}
				if (n % i == 0)
					break;
		}
	}
	printf("\n");
	return 0;
}