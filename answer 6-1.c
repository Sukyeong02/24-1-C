#include <stdio.h>
int max(int a, int b, int c)
{
	if (a > b)
	{
		if (a > c)
			return a;
		else
			return c;
	}
	else
	{
		if (b > c)
			return b;
		else
			return c;
	}
}

int min(int a, int b, int c)
{
	if (a < b)
	{
		if (a < c)
			return a;
		else
			return c;
	}
	else
	{
		if (b < c)
			return b;
		else
			return c;
	}
}

int main1(void)
{
	int num1, num2, num3;
	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	printf("���� ū ��: %d\n", max(num1, num2, num3));
	printf("���� ���� ��: %d\n", min(num1, num2, num3));

	return 0;
}
