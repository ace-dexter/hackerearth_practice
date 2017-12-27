#include<stdio.h>

int factorial(int fact)
{
    //int fact = 1;
    if(fact==1)
        fact = 1;
    else
    {
        fact = fact*factorial(fact-1);
    }
    return fact;
}

int main()
{
    int num, fact;
    scanf("%d", &num);
    if(num<1 || num>10)
        return 0;
	fact = factorial(num);
    
    printf("%d", fact);
    
    return 0;
}
