#include <stdio.h>
int main7(void)
{
	int n;
	printf("���� n�� �Է��ϼ���: ");
	scanf_s("%d", &n);

	int k = 0;
	int result = 1;
	while (result <= n)
	{
		k++;
		result *= 2;
	}
	printf("�ִ� k��: %d", k-1);
	return 0;
}