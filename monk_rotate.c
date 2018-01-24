#include<stdio.h>
#include<stdlib.h>

void rotate(long , long *, long );

int main()
{
	long *arr = NULL;
	long n, t, k, i, j;

	scanf("%ld", &t);
	if(t <= 0 || t > 20)
		return -1;

	for(i = 0; i < t; i++)
	{
		scanf("%ld", &n);
		/*input the size of array*/
		if(n <= 0 || n > 100000)
			return -1;
		
		arr = (long *)malloc(n*sizeof(long));
		if(arr == NULL)
			return -1;
		
		scanf("%ld", &k);
		if(k < 0 || k > 1000000)
			return -1;

		for(j = 0; j < n; j++)
		{
			scanf("%ld", &arr[j]);
			if(arr[j] < 0 || arr[j] >= 100000)
				return -1;
		}
		
		rotate(k, arr, n);
		printf("\n");
		free(arr);
		arr = NULL;
	}

	return 0;	
}

void rotate(long steps, long *arr, long n)
{
	long i;

	if(steps > n)
	{
		steps = steps % n;
	}
	for(i = n-steps; i < n; i++)
	{
		printf("%ld ", arr[i]);
	}

	for(i = 0; i < n-steps; i++)
	{
		printf("%ld ", arr[i]);
	}
}
