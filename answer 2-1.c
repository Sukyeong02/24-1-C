#include <stdio.h>

int main1(void)
{
	int result1, result2;
	int num1, num2;
	printf("µÎ °³ÀÇ Á¤¼ö ÀÔ·Â: ");
	scanf_s("%d %d", &num1, &num2);
	
	result1 = num1 - num2;
	printf("»¬¼À °á°ú: %d\n", result1);

	result2 = num1 * num2;
	printf("°ö¼À °á°ú: %d\n", result2);
	return 0;
}