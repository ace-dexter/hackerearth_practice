#include<stdio.h>

int main()
{
	int t = 0, n = 0, i;
	long m = 0;
	scanf("%d", &t);
	if(t < 1 || t > 20)
		return 0;

	for(i = 0; i < t; i++)
	{
		scanf("%d%ld", &n, &m);
		if( n < 1 || n > 100 || m < 1 || m > 100000)
			return 0;

		if( m%n == 0)
			printf("Yes\n");
		else
			printf("No\n");
	}

	return 0;
}
