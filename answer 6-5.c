#include <stdio.h>
int save(int money)
{
	static int total = 0;

	if (money != -1)
	{
		total += money;
		printf("��������� �Աݾ�: %d\n", total);
	}
	else
	{
		printf("�Ա� �Ϸ�");
	}
}

int main(void)
{
	int num;
	while(1)
	{
		printf("������ �ݾ�: ");
		scanf_s("%d", &num);

		save(num);

		if (num == -1)
			break;
	}
	return 0;
}