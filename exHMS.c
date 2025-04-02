#include<stdio.h>

int main()
{
    int hora, min, seg;

    printf("Digite hora, minuto e segundos: ");
    scanf("%d %d %d", &hora, &min, &seg);

    if (hora>1 && min>15)
    {
        printf("quantidade de segundos: %02d\n", hora*3600+min*60+seg);
    }
    else
    {
        printf("quantidade de minutos: %02d\n", hora*60+min+seg/60);
    }
    printf("Horario:%02d:%02d:%02d\n", hora, min, seg);

    return 0;
}
