#include <stdio.h>
int fibo(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fibo(n - 1) + fibo(n - 2);
}

int main3(void)
{
	int n, a;
	printf("����ϰ��� �ϴ� �Ǻ���ġ ������ ��: ");
	scanf_s("%d", &n);

	for (a = 0; a < n; a++)
	{
		printf("%d ,", fibo(a));
	}
	return 0;
}