#include <stdio.h>

int main3(void)
{
	int num;

	printf("숫자 입력: ");
	scanf_s("%d", &num);

	printf("아스키 문자 출력: %c\n", num);
	return 0;
}