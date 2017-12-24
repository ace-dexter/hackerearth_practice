#include<stdio.h>

int check_prime(int i)
{
	int j = 2;
	int flag = 1;

	while(j < i)
	{
		if(i%j == 0)
		{
			flag = 0;
			break;
		}
		j++;
	}
	return flag;
}

int main()
{
	int num, i = 2;
	int ret;

	scanf("%d", &num);
	if(num <=1 || num >= 1000)
		return 0;
	if(num==2)
	{
		printf("%d", num);
	}
	else
	{	
		while(i <= num)
		{
			ret = check_prime(i);
			if(1 == ret)
			{	
				printf("%d ", i);
			}
			i++;
		}	
	}
	return 0;
}
