#include <stdio.h>

int main(void)
{
	int result;
	int num1, num2;
	printf("�� ���� ���ڸ� �Է��ϼ���: ");
	scanf_s("%d %d", &num1, &num2);

	result = num1 % num2;
	printf("������: %d\n", result);
	return 0;
}