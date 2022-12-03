#include <stdlib.h>
#include <stdio.h>

void main()
{
	int a[3][2];

	for (int i =0; i < 3; i++)
	{
		for (int j = 0;  j < 2; j++)
		{
			a[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
}
