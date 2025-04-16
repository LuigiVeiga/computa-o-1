#include<stdio.h>
int main()
{
    int numero, maior;
    numero=1;
    maior=0;
    while(numero>=0)
    {
        printf("Digite um número positivo inteiro(digite um negativo para parar):");
        scanf("%d",&numero);
        if(numero>maior)
        maior= numero;
    }
    printf("o maior número digitado foi %d\n", maior);
    return 0;
}
