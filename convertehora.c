#include<stdio.h>
void converterhora(int total_segundos, int *hora, int *min, int *seg)
{
    *hora = total_segundos/3600;
    *min = (total_segundos%3600)/60;
    *seg = (total_segundos%60);
}
int main()
{
    int total_segundos, hora, min, seg;
    printf("digite o total de segundos: ");
    scanf("%d",&total_segundos);
    converterhora(total_segundos, &hora, &min, &seg);
    printf("isso equivale a %d:%d:%d",hora,min,seg);
}
