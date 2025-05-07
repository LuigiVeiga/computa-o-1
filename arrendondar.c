#include<stdio.h>
int arredonda(float x)
{
if (x>=0)
    return(x+0.5);
    else
    return (x-0.5);
    }

int main()
{
    float x;
    printf("digite um numero para arredondar: ");
    scanf("%f",&x);
    int arredondado= arredonda(x);
    printf("%d",arredondado);
    return 0;
}
