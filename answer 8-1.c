#include <stdio.h>
int main1(void)
{
	int arr[5] = { 76, 84, 80, 92, 96 };
	int total = 0;
	float avg;

	for (int i = 0; i < 5; i++)
	{
		total += arr[i];
	}
	avg = total / 5.0;
	printf("������ %d��, ����� %.1f���Դϴ�.\n", total, avg);
	return 0;
}