#include <stdio.h>
int main2(void)
{
	char str[100] = { 0 };
	char str1[] = "�������ڴ��б�";
	char str2[] = "�ؼ���";

	int i = 0;
	
	for (int j = 0; str1[j] != '\0'; j++)
	{
		str[i++] = str1[j];
	}
	str[i++] = ' ';
	for (int k = 0; str2[k] != '\0'; k++)
	{
		str[i++] = str2[k];
	}
	str[i] = '\0';
	printf("%s\n", str);
	return 0;
}