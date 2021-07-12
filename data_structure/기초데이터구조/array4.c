#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int N, M, n, m;
	int arr[100][100];
	int num =1;
	int i =0, j =0;
	int x =0, y =-1, turn =1;
	
	scanf("%d %d", &N, &M);
	
	n =N;
	m =M;

	while (num <= N*M)
	{
		for (i=0;i<m;i++)
		{
			y +=turn;
			arr[x][y] =num;
			num++;
		}

		n--;

		for (i=0;i<n;i++)
		{
			x +=turn;
			arr[x][y] =num;
			num++;
		}

		m--;

		turn *=-1;
	}

	for (i=0;i<N;i++)
	{
		for (j=0;j<M;j++)
		{
			printf(" %2d", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}