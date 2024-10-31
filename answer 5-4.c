#include <stdio.h>
int main4(void)
{
	int dan, i;

	for (dan = 1; dan < 10; dan++)
	{
		if (dan % 2 != 0)
			continue;

		for (i = 1; i < 10; i++)
		{
			if (dan < i)
				break;
			printf("%d X %d = %d\n", dan, i, dan * i);
		}
	}
	return 0;
}