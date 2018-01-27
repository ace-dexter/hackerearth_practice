// Write your code here
#include<stdio.h>

int main()
{
    int N, M;
    scanf("%d%d", &N, &M);
    
    int arr[N][M], arr1[M][N];
    int i,j;
     
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            scanf("%d", &arr[i][j]);
			arr1[j][i] = arr[i][j];
        }
    }
    
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
