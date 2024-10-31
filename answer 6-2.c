#include <stdio.h>

double Fahrenheit(double c)
{
	double res;
	res = (1.8 * c) + 32;
	return res;
}

double Celsius(double f)
{
	double res;
	res = (f - 32) / 1.8;
	return res;
}

int main2(void)
{
	int num;
	printf("¼·¾¾ ÀÔ·Â 1, È­¾¾ ÀÔ·Â 2: ");
	scanf_s("%d", &num);

	if (num == 1)
	{
		double c;
		double res1;
		printf("¼·¾¾ ÀÔ·Â: ");
		scanf_s("%lf", &c);

		res1 = Fahrenheit(c);
		printf("º¯È¯µÈ È­¾¾: %f", res1);
	}
	else
	{
		double f;
		double res2;
		printf("È­¾¾ ÀÔ·Â: ");
		scanf_s("%lf", &f);

		res2 = Celsius(f);
		printf("º¯È¯µÈ ¼·¾¾: %f", res2);
	}
	return 0;
}
