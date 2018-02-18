#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void sort_str(char *str, long k)
{
	long i, c = 0, len;
	long count[26];
	int j;

	len = strlen(str);

	for(i = 0; i<26; i++)
	{
		count[i] = 0;
	}
	for(i = 0; i < len; i++)
	{
		count[str[i]-97]++;
	}
	for(j = 0; j<26; j++)
	{
		if(count[j] !=0)
		{
			c++;
			if(c == k)
			{
				printf("%c\n", (char)(97+j));
				break;
			}
		}
	}
}

int main()
{
	long n, q, l, r, k;
	long i, j;
	char *substr = NULL;

	scanf("%ld", &n);
	if(n < 1 || n > 50000)
		return 0;

	char str[n];
	scanf("%ld", &q);
	if(q < 1 || q > 100000)
		return 0;

	scanf("%s", str);
	for(i = 0; i < q; i++)
	{
		scanf("%ld%ld%ld", &l, &r, &k);
		if(k > r-l+1)
		{
			printf("Out of range\n");
			continue;
		}	
		substr = (char *)calloc(r-l+2, sizeof(char));
		if(substr == NULL)
			return 0;
		
		for(j = 0; j < r; j++)
		{
			substr[j] = str[(l-1)+j];
		}
		sort_str(substr, k);
	}

	free(substr);
	substr = NULL;
	return 0;
}
