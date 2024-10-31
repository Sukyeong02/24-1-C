#include <stdio.h>
int main6(void)
{
	int num, h, m,s;
	printf("초 (Second)를 입력하세요: ");
	scanf_s("%d", &num);

	h = num / 3600;
	int left = num % 3600;
	m = left / 60;
	s = left % 60;

	printf("%d시 %d분 %d초", h, m, s);
	return 0;
}