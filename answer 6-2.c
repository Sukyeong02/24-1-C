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
	printf("���� �Է� 1, ȭ�� �Է� 2: ");
	scanf_s("%d", &num);

	if (num == 1)
	{
		double c;
		double res1;
		printf("���� �Է�: ");
		scanf_s("%lf", &c);

		res1 = Fahrenheit(c);
		printf("��ȯ�� ȭ��: %f", res1);
	}
	else
	{
		double f;
		double res2;
		printf("ȭ�� �Է�: ");
		scanf_s("%lf", &f);

		res2 = Celsius(f);
		printf("��ȯ�� ����: %f", res2);
	}
	return 0;
}
