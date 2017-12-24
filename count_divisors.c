#include<stdio.h>

int main()
{
	int l, r, k;
	int i, count = 0;

	scanf("%d%d%d", &l, &r, &k);
	if(l<=0 || l >r || r > 1000 || k < 1 || k >1000)
		return 0;
	for(i = l; i<=r; i++)
	{
		if(i%k==0)
		{
			count++;
		}
	}
	printf("%d", count);
}
