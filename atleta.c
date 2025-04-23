#include<stdio.h>
#include<math.h>
int main()
{
    int d,min,seg,tm,ts;
    printf("qual a distancia que você percorreu em quilometros? ");
    scanf("%d",&d);
    printf("em quantos minutos você percorreu? ");
    scanf("%d",&min);
    printf("em quantos segundos você percorreu? ");
    scanf("%d",&seg);
    tm=min/d;
    ts=(60*(min%d)+seg)/d;
    printf("seu ritimo em em minutos e segundos por quilometro é respectivamente %d;%d",tm,ts);
    return 0;
}
