#include <stdio.h>
int multiple(int a, int b)
{
	return a * b;
}

int main4(void)
{
	int num1, num2;
	int count = 0;
	
	while (1)
	{
		printf("두 개의 숫자 입력: ");
		scanf_s("%d %d", &num1, &num2);

		if (num1 == 0 && num2 == 0)
			break;

		printf("연산 결과: %d\n", multiple(num1, num2));
		count++;
	}
	printf("총 %d번 연산하였습니다.", count);
	return 0;
}