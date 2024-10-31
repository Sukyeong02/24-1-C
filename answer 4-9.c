#include <stdio.h>
int main10(void)
{
	int i, num1, num2;
	int total = 0;

	printf("두 정수 입력: ");
	scanf_s("%d %d", &num1, &num2);

	for (i = num1; i <= num2; i++)
		total += i;

	printf("%d와 %d사이의 정수의 합: %d", num1, num2, total);
	return 0;
}