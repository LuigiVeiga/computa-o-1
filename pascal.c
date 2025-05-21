#include<stdio.h>
#define N 80
void criarmatriz(int n, int pascal[N][N])
{
    int i,j;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            pascal[i][j]=0;
}
void pascalizar(int n, int pascal[N][N])
{
    int i,j;
    for(i=0; i<n; i++)
    {
        pascal[i][0]=1;
        for(j=1; j<=i; j++)
        {
            pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
        }
    }
}
void imprimematriz(int pascal[N][N],int n)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%6d", pascal[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int pascal[N][N];
    criarmatriz(N, pascal);
    pascalizar(N,pascal);
    imprimematriz(pascal, N);
}
