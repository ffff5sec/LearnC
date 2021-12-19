#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) 
{
	
	char str[100] = { 0 };
	int a[93] = { 0 };
	scanf("%s", str);

	//printf( "%s\n",str );

	for (size_t i = 0; i < 100; i++)
	{
		a[int(str[i]) - 33] += 1;
	}

	for (size_t i = 0; i < 93; i++)
	{
		if (a[i] != 0)
		{
			printf("%c-->%d\n", char(i + 33), a[i]);
		}
	}
	return 0;
}