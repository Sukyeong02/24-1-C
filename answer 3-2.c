#include <stdio.h>

int main2(void)
{
	double num1, num2;
	printf("µÎ ½Ç¼ö¸¦ ÀÔ·Â: ");
	scanf_s("%lf %lf", &num1, &num2);

	double result1, result2, result3, result4;
	result1 = num1 + num2;
	result2 = num1 - num2;
	result3 = num1 * num2;
	result4 = num1 / num2;
	printf("µÎ ½Ç¼öÀÇ µ¡¼À: %f\n", result1);
	printf("µÎ ½Ç¼öÀÇ »¬¼À: %f\n", result2);
	printf("µÎ ½Ç¼öÀÇ °ö¼À: %f\n", result3);
	printf("µÎ ½Ç¼öÀÇ ³ª´°¼À: %f", result4);
	return 0;
}