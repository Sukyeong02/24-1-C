#include <stdio.h>

int main1(void)
{
	int result;
	int a, b;
	printf("ù ��° ����Ʈ�� x,y ��ǥ: ");
	scanf_s("%d %d", &a, &b);
	int c, d;
	printf("�� ��° ����Ʈ�� x,y ��ǥ: ");
	scanf_s("%d %d", &c, &d);

	result = (c - a) * (d - b);
	printf("����: %d", result);
	return 0;
}