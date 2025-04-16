#include<stdio.h>
#include<locale.h>
int main()
{
    int numero, positivos,numerador_media;
    float media;
    numerador_media=0;
    numero=1;
    positivos=0;
    while(numero!=(-1000))
    {
        printf("Digite um número inteiro inteiro(digite -1000 para parar):");
        scanf("%d",&numero);
        if(numero>0)
        {
            positivos=positivos+1;
            numerador_media=numerador_media+numero;
            media=numerador_media / positivos;
        }
        printf("%d\n",numero);
    }
    printf("você digitou %d números postivos\n", positivos);
    printf("a media desses valores positivos é %.1f\n", media);
    return 0;
}
