#include <stdio.h>
int main3(void)
{
	int num1, num2;
	printf("�� ���� ������ �Է��ϼ���: ");
	scanf_s("%d %d", &num1, &num2);

	int a = 1;
	
	for (int i = 1; i <= num1 && i <= num2; i++)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			a = i;
		}
	}
	printf("�ִ� �����: %d", a);
	return 0;
}