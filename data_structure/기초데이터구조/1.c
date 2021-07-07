#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int arr[100]={0}, swap[100]={0};
	int temp;
	int i;
	int n, swapN, swapInfo;
	int index1, index2;

	scanf("%d", &n);

	for (i=0;i<n;i++)
		scanf("%d", &arr[i]);

	scanf("%d", &swapN);

	for (i=0;i<swapN*2;i++)
		scanf("%d", &swap[i]);

	for (i=0;i<swapN*2;i=i+2)
	{
		index1 = swap[i];
		index2 = swap[i+1];

		while (index1 < index2)
		{
			temp = arr[index1];
			arr[index1] = arr[index2];
			arr[index2] = temp;

			index1++;
			index2--;
		}
	}

	for (i=0;i<n;i++) 
		printf("%d ", arr[i]);

	return 0;
}