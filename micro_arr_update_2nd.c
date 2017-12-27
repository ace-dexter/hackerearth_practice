#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t,i,j, n;
	long k, min, *arr = NULL;

	scanf("%d", &t);
	if(t<1 || t >5)
		return 0;
	for (i = 0; i<t; i++)
	{
		scanf("%d%ld", &n, &k);
		if(n <1 || n>100000 || k <1 || k>1000000)
			return 0;

		arr = (long *)malloc(n*sizeof(long));

		if(arr==NULL)
			return 0;
		for(j = 0; j<n; j++)
		{
			scanf("%ld", &arr[j]);
			if(arr[j] < 1 || arr[j] > 1000000)
				return 0;
		}

		min = arr[0];
		for(j = 1; j < n; j++)
		{
			if(min > arr[j])
			{
				min = arr[j];
			}
		}
		if(min < k)
			printf("%ld\n", k - min);
		else
			printf("0\n");
	}
	free(arr);
	arr = NULL;		
	return 0;
}

