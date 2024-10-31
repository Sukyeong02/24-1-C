#include <stdio.h>

int main(void)
{
	char ch1;

	printf("문자 입력: ");
	scanf_s("%c", &ch1);

	printf("아스키 숫자 출력: %d\n", ch1);
	return 0;
}