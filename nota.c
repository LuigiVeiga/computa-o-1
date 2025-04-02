#include<stdio.h>
int main()
{
    float n1, n2, n3,
          media;
    printf("Digite as três notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (n1+n2+n3) / 3;
    printf("Sua média é:%0.1f\n", media);
    if (media>8)
        printf("Status: Aprovado com Distinção. ");
    else if (media>=6)
        printf("Status: Aprovado Direto. ");
    else if (media >=4)
        printf("Status: Vai para Final. ");
    else
        printf("Status: Reprovado Direto. ");
    return 0;
}
