//Memorise Me Problem

#include<stdio.h>
#include<stdlib.h>

int main()
{
	long count[1001]; 
	long N, q;
	int  in_num;
	long i, j;

	scanf("%ld", &N);
	if(N < 1 || N > 100000)
		return -1;

	for(i = 0; i < 1001; i++)
		count[i] = 0;

	for(i = 0; i < N; i++)
	{
		scanf("%d", &in_num);
		if(in_num < 0 || in_num > 1000)
			return -1;
		count[in_num]++;
	}
	scanf("%ld", &q);
	if(q < 1 || q > 100000)
		return -1;

	/*Loop for query*/
	for(j = 0; j < q; j++)
	{
		scanf("%d", &in_num);
		if(in_num < 0 || in_num > 1000)
			return -1;
		
		if(count[in_num]==0)
			printf("NOT PRESENT\n");
		else
			printf("%ld\n", count[in_num]);
	}

	return 0;
}
