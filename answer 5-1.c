#include <stdio.h>
int main1(void)
{
	int num;

	for (num = 1; num <= 99; num++)
	{
		if (num % 7 == 0 || num % 9 == 0)
			printf("%d ", num);
	}
	return 0;
}