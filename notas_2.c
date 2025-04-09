#include <stdio.h>
int main()
{
    float n1, n2, n3, media;
    printf("Digite as notas de cada trimestre");
    scanf("%f %f %f", &n1, &n2, &n3);
    int fr;
    printf("digite sua frequencia");
    scanf("%d", &fr);
    media=(n1+n2+n3)/3;
    if (media>8 && fr>= 75)
        printf("O estudante foi aprovado com Distinção.Pois teve média %.1f e frequencia %d\n",media, fr);
    else if(media>=6 && fr>=75)
        printf("O estudante foi aprovado direto.Pois teve média %.1f e frequencia %d\n",media, fr);
    else if(media>=4 &&  fr>=75 || media<6 && fr <75 || media >=4 && fr>50 && fr <75)
        printf("O estudante foi para final.Pois teve média %.1f e frequencia %d\n",media, fr);
    else
        printf("O estudante foi reprovado direto.Pois teve média %.1f e frequencia %d\n",media, fr);
    return 0;
}
