#include<stdio.h>

int main()
{
	int N, L, W, H;
	int i;

	scanf("%d%d", &L, &N);
	if(N >= 1 && N<=1000)
	{	
	for(i = 0; i<N; i++)
	{
		scanf("%d%d", &W, &H);
		if(1 <= L && 10000 >= L && 
			1 <= W && 10000 >= W && 
			1 <= H && 10000 >= H )
		{
			if(W < L || H < L)
			{
				printf("UPLOAD ANOTHER");
			}
			else if( W >= L && H>=L)
			{
				if(W == H)
					printf("ACCEPTED");
				else
					printf("CROP IT");
				
			}
		}
	}
	}
	return 0;
}
