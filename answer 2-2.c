#include <stdio.h>

int main2(void)
{
	int result;
	int num1, num2, num3;

	printf("세 개의 숫자를 입력하세요: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result = num1 * num2 + num3;
	printf("%d * %d + %d = %d\n", num1, num2, num3, result);
	return 0;
}