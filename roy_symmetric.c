#include<stdio.h>

int main()
{
	int t, n, i, row, col;
	int flag;

	scanf("%d", &t);
	if(t < 1 || t > 10)
		return 0;

	for(i = 0; i<t; i++)
	{
		flag = 0;

		scanf("%d", &n);
		if(n < 2 || n > 32)
			return 0;
		char str[n][n];

		for(row = 0; row < n; row++)
		{
			scanf("%s", str[row]);
		}
		/**traversing through rows*/
		for(row = 0; row < n; row++)
		{	
			for(col = 0; col < n/2; col++)
			{
				if(str[row][col] != str[row][n-1-col])
				{
					flag = 1;
					break;
				}
			}
			if(flag == 1)
				break;
		}
		if(flag == 0)
		{
			/*traversing through columns*/
			for(col = 0; col < n; col++)
			{	
				for(row = 0; row < n/2; row++)
				{
					if(str[row][col] != str[n-1-row][col])
					{
						flag = 1;
						break;
					}
				}
				if(flag == 1)
					break;
			}
		}
		printf(flag == 0?"YES\n":"NO\n");
	}

	return 0;
}
