#include <stdio.h>
int main4(void)
{
	int money;
	printf("���� �ؼ��̰� �����ϰ� �ִ� �ݾ�: ");
	scanf_s("%d", &money);

	printf("���� ������ ����\n");

	for (int a = 1; a * 500 <= money; a++)
	{
		for (int b = 1; b * 700 <= money; b++)
		{
			for (int c = 1; c * 400 <= money; c++)
			{
				if (a * 500 + b * 700 + c * 400 == money)
				{
					printf("�� %d��, ���� %d��, ����� %d��\n", a, b, c);
				}
			}
		}
	}
	return 0;
}