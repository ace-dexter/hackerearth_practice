#include<stdio.h>

int setbit(int num, int lpos, int upos)
{
    int i;
    for(i = lpos; i <= upos; i++)
    {
        num = num | (1 << i); 
    }   
    return num;
}


int main()
{
    int num;
    int lpos, upos;

    printf("Enter num, lpos & upos: \n");
    scanf("%d%d%d", &num, &lpos, &upos);
    num = setbit(num, lpos, upos);
    printf("Set number = %d\n", num);

    return 0;
}

