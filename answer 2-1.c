#include <stdio.h>

int main1(void)
{
	int result1, result2;
	int num1, num2;
	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %d", &num1, &num2);
	
	result1 = num1 - num2;
	printf("���� ���: %d\n", result1);

	result2 = num1 * num2;
	printf("���� ���: %d\n", result2);
	return 0;
}