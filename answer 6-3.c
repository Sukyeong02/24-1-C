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
	printf("출력하고자 하는 피보나치 수열의 수: ");
	scanf_s("%d", &n);

	for (a = 0; a < n; a++)
	{
		printf("%d ,", fibo(a));
	}
	return 0;
}