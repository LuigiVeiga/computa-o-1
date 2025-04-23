#include<stdio.h>
int main()
{
    int teto,i;
    printf("digite um número inteiro: ");
    scanf("%d",&teto);
    i=1;
    while (i<=teto)
    {
        if (i%2==0)
        {
            printf("%d\n",i);
        }
        i=i+1;
    }
    return 0;
}
