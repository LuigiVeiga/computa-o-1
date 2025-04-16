#include<stdio.h>
int main()
{
    int numero, maior;
    maior=0;
    while(numero>=0)
    {
        printf("Digite um número positivo inteiro:");
        scanf("%d",&numero);
        if(numero>maior)
        maior= numero;
    }
    printf("o maior número digitado foi %d\n", maior);
    return 0;
}
