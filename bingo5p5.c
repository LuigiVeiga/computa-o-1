#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 5
int numerorepetido(int m[N][N], int num, int nl, int nc)
{
    for (nl=0; nl < N; nl++)
    {
        for (nc= 0; nc < N; nc++)
        {
            if (m[nl][nc] == num)
            {
                return 1;
            }
        }
    }
    return 0;
}

void preenchebingo(int m[N][N], int nl, int nc)
{
    srand(time(NULL));
    for(nl=0; nl<N; nl++)
    {
        for(nc=0; nc<N; nc++)
        {
            int num;
            do
            {
                num=rand()%100;

            }
            while(numerorepetido(m, num, nl, nc));

                m[nl][nc]= num;


        }
    }
}
void imprimirmatriz(int m[N][N], int nl, int nc)
{
    for(nl=0; nl<N; nl++)
    {
        for(nc=0; nc<N; nc++)
        {
            printf("%3d",m[nl][nc]);
        }
        printf("\n");
    }
}
int main()
{
    int m[N][N], nl, nc;
    preenchebingo( m, nl, nc );
    imprimirmatriz(m, nl, nc);
}
