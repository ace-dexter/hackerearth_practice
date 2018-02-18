#include<stdio.h>
#include<string.h>

int main()
{
	int n, m, t;
	int i, temp, l;
	int q;
	long len, count, k;

	scanf("%d", &t);
	if(t <1 || t> 5)
	{
		return 0;
	}

	for(i = 0; i < t; i++)
	{
		scanf("%d%d", &n, &m);
		if(n < 1 || n > 500 || m < 1 || m > 500)
			return 0;
		
		char matrix[n][m+1], str[n*m+1];
		
		for(l = 0; l < n; l++)
		{
			scanf("%s", matrix[l]);
		}
		
		int flag[n][m];
		memset(flag, 0, n*m*sizeof(int));

		scanf("%s", str);
		len = strlen(str);

		count = 0;
		for(k = 0; k<len; k++)
		{
			q = 0;
			temp = 0;
			while(flag[k%n][q] == 1 && k%n < n)
			{
				temp++;
				q++;
				if(flag[k%n][q] == 0)
					break;
			}
			for(l = temp; l < m; l++)
			{
				if(str[k] == matrix[k%n][l])
				{
					count++;
					flag[k%n][l] = 1;
				//	printf("l = %d, temp = %d\n", l, temp);
			//		printf("Match found at matrix[%d][%d] = %c\n", k%n, l, matrix[k%n][l]);
					break;
				}
			}

		}
		if(count == len)
			printf("Yes\n");
		else
				printf("No\n");
	}

	return 0;
}
