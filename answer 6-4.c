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
		printf("�� ���� ���� �Է�: ");
		scanf_s("%d %d", &num1, &num2);

		if (num1 == 0 && num2 == 0)
			break;

		printf("���� ���: %d\n", multiple(num1, num2));
		count++;
	}
	printf("�� %d�� �����Ͽ����ϴ�.", count);
	return 0;
}