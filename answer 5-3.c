#include <stdio.h>
int main3(void)
{
	double a, b, c;
	double result;

	printf("����, ����, ������ ������ �Է�: ");
	scanf_s("%lf %lf %lf", &a, &b, &c);

	result = (a + b + c) / 3;
	printf("���: %f\n", result);

	if (result >= 90)
		printf("A");
	else if (result >= 80)
		printf("B");
	else if (result >= 70)
		printf("C");
	else if (result >= 50)
		printf("D");
	else
		printf("F");

	return 0;
}