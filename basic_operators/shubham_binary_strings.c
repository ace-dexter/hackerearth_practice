#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t, i, j;
	long n, count = 0;
	char *str = NULL;

	scanf("%d", &t);
	if(t < 1 || t > 100)
		return 0;
	for(i = 0; i < t; i++)
	{
		scanf("%ld", &n);
		if(n < 1 || n > 100000)
			return 0;

		str = calloc(n+1, sizeof(char));
		if(str == NULL)
			return 0;
		scanf("%s", str);
		count = 0;
		for(j = 0; j < n; j++)
		{
			if(str[j] == '1')
				count++;
		}
		printf("%ld\n", n-count);
		
		free(str);
		str = NULL;
	}
	return 0;
}
