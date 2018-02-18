// Write your code here
#include<stdio.h>

int main()
{
	int i, j;
	char ch[3] = {'a', 'b', 'c'};

	for(i = 0; i < (1 << 3); i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(i & (1 << j))
				printf("%c ", ch[j]);
		}
		printf("\n");
	}
    return 0;
}
