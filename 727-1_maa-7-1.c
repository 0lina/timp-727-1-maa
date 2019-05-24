#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

void quicksort(int* a, int first, int last)
{
	int i = first, j = last;
	double tmp, x = a[(first + last) / 2];
	do
	{
		while (a[i] < x)
			i++;
		while (a[j] > x)
			j--;
		if (i <= j)
		{
			if (i < j)
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
			i++;
			j--;
		}
	} while (i <= j);
	if (i < last)
		quicksort(a, i, last);
	if (first < j)
		quicksort(a, first, j);
}

int main()
{
	int n;
	scanf("%d", &n);
	int *a = (int *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	quicksort(a, 0, n - 1);
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	free(a);
	printf("\n");
	return 0;
}
