#include<stdio.h>

int main()
{
	int t, i;
	long n, j, count;
	long long *speed;
	int flag;

	scanf("%d", &t);
	if(t <=0 || t > 100)
		return -1;
	for(i = 0; i < t; i++)
	{
		scanf("%ld", &n);
		if(n < 1 || n > 100000)
			return -1;
	
		speed = (long long *)malloc(n*sizeof(long long));
		if(NULL == speed)
		{
			return -1;
		}
		for(j = 0; j < n; j++)
		{
			scanf("%ld", &speed[j]);
			if(speed[j] < 1 || speed[j] > 1000000000)
				return -1;
		}

		if(n == 1)
			printf("%ld",n);
		else
		{
			for(j = 1; j < n; j++)
			{
				if(arr[j] < arr[0])
				
			}
		}
	}
}
