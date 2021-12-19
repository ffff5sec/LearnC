#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) 
{

	int arr[8] = { 53, 45, 26, 77, 28, 59, 62, 38 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int att = 0;
	for (size_t i = len - 1; i >0; i--)
	{
		
		for (size_t j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				att = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = att;

			}
			
		}
	}
	

	for (size_t i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	putchar('\n');
	return 0;
}