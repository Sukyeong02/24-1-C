#include <stdio.h>

int main2(void)
{
	double num1, num2;
	printf("�� �Ǽ��� �Է�: ");
	scanf_s("%lf %lf", &num1, &num2);

	double result1, result2, result3, result4;
	result1 = num1 + num2;
	result2 = num1 - num2;
	result3 = num1 * num2;
	result4 = num1 / num2;
	printf("�� �Ǽ��� ����: %f\n", result1);
	printf("�� �Ǽ��� ����: %f\n", result2);
	printf("�� �Ǽ��� ����: %f\n", result3);
	printf("�� �Ǽ��� ������: %f", result4);
	return 0;
}