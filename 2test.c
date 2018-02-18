#include<stdio.h>

int main()
{
    int t = 0, n = 0, i = 0;
    int count;
    
    scanf("%d", &t);
    if(t < 1 || t > 1000)
        return 0;
    for(i = 0; i < t; i++)
    {
		count = 0;
		scanf("%d", &n);
		while(n)
		{
			n = n & (n-1);
			count++;
		}
        printf("%d\n", count);
    }
}
