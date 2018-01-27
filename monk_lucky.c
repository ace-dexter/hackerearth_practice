#include<stdio.h>

int main()
{
	long count, n, j;
	long long num, min;
	int t, i;


	scanf("%d", &t);
	if(t < 1 || t > 10)
		return 0;

	for(i = 0; i < t; i++)
	{
		min = 0;
		count = 0;		
		scanf("%ld", &n);
		if(n < 1 || n > 100000)
			return 0;
		//Loop for reading Array elements
		for(j = 0; j < n; j++)
		{
			scanf("%lld", &num);
			if(num < 1 || num > 1000000000)
				return 0;
			//for 1st element			
			if(j == 0)
			{
				min = num;
				count++;
			}
			else if(min > num)
			{
				min = num;
				count=0;	//initialise the count if the different minimum appears
				count++;
			}
			else if(min == num)
			{
				count++;	//increment the count if same element appears
			}
		}
		if(count % 2 != 0)
			printf("Lucky\n");
		else
			printf("Unlucky\n");
	}
	return 0;
}
