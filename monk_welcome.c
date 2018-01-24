#include<stdio.h>
#include<stdlib.h>

int main()
{
	unsigned int *A, *B;
	unsigned int i, N;
	
	scanf("%d", &N);
	A = calloc(N, sizeof(int));
	B = calloc(N, sizeof(int));
	if(NULL == A || NULL == B)
	{
		return 0;
	}
	
	
	for(i = 0; i< N; i++)
	{
		scanf("%u", &A[i]);
	}
	for(i = 0; i< N; i++)
	{
		scanf("%u", &B[i]);
	}
	for(i = 0; i< N; i++)
	{
		printf("%u ", A[i] + B[i]);
	}
}
