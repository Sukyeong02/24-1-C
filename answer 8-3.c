#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str1[100] = { 0 };
	char str2[100] = { 0 };

	printf("문자열을 입력하세요: ");
	scanf("%s", str1);

	int len = 0;
	while (str1[len] != '\0')
	{
		len++;
	}
	for (int i = 0; i < len; i++)
	{
		str2[i] = str1[len - i - 1];
	}
	str2[len] = '\0';
	printf("거꾸로 출력 : %s\n", str2);
	return 0;
}