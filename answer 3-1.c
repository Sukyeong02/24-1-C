#include <stdio.h>

int main1(void)
{
	int result;
	int a, b;
	printf("첫 번째 포인트의 x,y 좌표: ");
	scanf_s("%d %d", &a, &b);
	int c, d;
	printf("두 번째 포인트의 x,y 좌표: ");
	scanf_s("%d %d", &c, &d);

	result = (c - a) * (d - b);
	printf("넓이: %d", result);
	return 0;
}