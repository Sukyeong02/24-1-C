#include <stdio.h>
int main7(void)
{
	int n;
	printf("숫자 n을 입력하세요: ");
	scanf_s("%d", &n);

	int k = 0;
	int result = 1;
	while (result <= n)
	{
		k++;
		result *= 2;
	}
	printf("최대 k값: %d", k-1);
	return 0;
}