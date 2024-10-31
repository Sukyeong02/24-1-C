#include <stdio.h>
int save(int money)
{
	static int total = 0;

	if (money != -1)
	{
		total += money;
		printf("현재까지의 입금액: %d\n", total);
	}
	else
	{
		printf("입금 완료");
	}
}

int main(void)
{
	int num;
	while(1)
	{
		printf("저금할 금액: ");
		scanf_s("%d", &num);

		save(num);

		if (num == -1)
			break;
	}
	return 0;
}