#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int arr[100][100];
	int n;
	int i, j;
	int num =1;

	scanf("%d", &n);

	for (i=0;i<n;i++)
	{
		if (i % 2 == 1)
		{
			for (j=n-1;j>=0;j--)
			{
				arr[i][j] = num;

				num++;
			}
		}

		else 
		{
			for (j=0;j<n;j++)
			{
				arr[i][j] = num;

				num++;
			}
		}
	}

	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			printf(" %2d", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}