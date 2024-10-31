#include <stdio.h>
int main9(void)
{
	int sum = 0;
	int num = 0;

	do
	{
	    sum += num;
		num += 2;
	} while (num <= 100);
    printf("รัวี: %d", sum);
	return 0;
}