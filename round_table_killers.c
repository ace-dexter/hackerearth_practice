/*this problem is incomplete*/

#include<stdio.h>

int main()
{
	int *arr = NULL;
	int N = 0, K, X;
	int i, j, rem;
	int killed;

	scanf("%d", &N);
	if(N <=0 || N >= 1000)
		return 0;
	rem = N;

	scanf("%d%d", K, X);
	if(K<2 || K>=N || X<1 || X > N)
		return 0;

	arr = (int *)calloc(N, sizeof(int));
	if(arr == NULL)
	{
		return 0;
	}
	for(j = 1; j<=N; j++)
	{
		arr[j] = j++;
	}
	while(rem >= X%k)
	{
		killed = X % K;
		X = X + killed;
			
	}
}
