#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t,i,j, n;
	long k, *arr = NULL;
	int count, flag;

	scanf("%d", &t);
	if(t<1 || t >5)
		return 0;
	for (i = 0; i<t; i++)
	{
		count = 0;
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
		while(1)
		{
			for(j = 0; j < n; j++)
			{
				flag = 1;
				if(arr[j] < k)
				{
					flag = 0;
					break;
				}
			}
			if(flag == 1)
				break;
			if(flag == 0)
			{
				for(j = 0; j<n; j++)
				{
					arr[j]++;
				}
				count++;
			}
		}
		printf("%d\n", count);
		free(arr);
		arr = NULL;		
	}
	return 0;
}
