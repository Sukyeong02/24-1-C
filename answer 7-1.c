#include <stdio.h>
int main1(void)
{
	int num;

	printf("10진수 정수를 입력하세요: ");
	scanf_s("%d", &num);

	printf("16진수로 출력: 0x%x", num);

	return 0;
}