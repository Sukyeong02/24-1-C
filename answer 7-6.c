#include <stdio.h>
int main6(void)
{
	int num, h, m,s;
	printf("�� (Second)�� �Է��ϼ���: ");
	scanf_s("%d", &num);

	h = num / 3600;
	int left = num % 3600;
	m = left / 60;
	s = left % 60;

	printf("%d�� %d�� %d��", h, m, s);
	return 0;
}