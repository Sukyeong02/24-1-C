#include <stdio.h>

int main(void)
{
	int result;
	int num1, num2;
	printf("두 개의 숫자를 입력하세요: ");
	scanf_s("%d %d", &num1, &num2);

	result = num1 % num2;
	printf("나머지: %d\n", result);
	return 0;
}