#include <stdio.h>
int main4(void)
{
	int money;
	printf("현재 솜솜이가 소유하고 있는 금액: ");
	scanf_s("%d", &money);

	printf("구입 가능한 조합\n");

	for (int a = 1; a * 500 <= money; a++)
	{
		for (int b = 1; b * 700 <= money; b++)
		{
			for (int c = 1; c * 400 <= money; c++)
			{
				if (a * 500 + b * 700 + c * 400 == money)
				{
					printf("빵 %d개, 과자 %d개, 음료수 %d개\n", a, b, c);
				}
			}
		}
	}
	return 0;
}