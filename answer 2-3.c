#include <stdio.h>

int main3(void)
{
	int result;
	int num;
	printf("한 개의 숫자를 입력하세요: ");
	scanf_s("%d", &num);

	result = num * num;
	printf("%d\n", result);
	return 0;
}
