#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int n;
	int arr[100]={0}, swap[100]={0};
	int swapN;
	int i;
	int index1, index2;
	int temp;

	scanf("%d", &n);

	for (i=0;i<n;i++)
		scanf("%d", &arr[i]);

	scanf("%d", &swapN);

	for (i=0;i<swapN;i++)
		scanf("%d", &swap[i]);

	for (i=swapN-2;i>=1;i--)
	{
		index1 = swap[i];
		index2 = swap[i-1];
		
		temp = arr[index1];
		arr[index1] = arr[index2];
		arr[index2] = temp;
	}

	for (i=0;i<n;i++)
		printf("%d ", arr[i]);

	return 0;
}