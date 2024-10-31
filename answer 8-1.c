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
	printf("총점은 %d점, 평균은 %.1f점입니다.\n", total, avg);
	return 0;
}