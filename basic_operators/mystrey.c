#include<stdio.h>

int main()
{
	long long n;
	int count;

	while(scanf("%lld", &n) != EOF)
	{
		
		if(n < 0 || n > 1000000000000000000)
			return 0;
		count = 0;
		
		while(n)
		{
			n = n&(n-1);
			count++;
		}
		printf("%d\n", count);
	}

	return 0;
}
