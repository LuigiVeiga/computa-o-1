#include<stdio.h>
#include<math.h>
int main()
{
    float larg,alt,btinta;
    printf("digite a altura da parede em metros:  ");
    scanf("%f",&alt);
    printf("digite a largura da parede em metros:  ");
    scanf("%f",&larg);
    btinta=(larg*alt)/2;
    btinta=ceil(btinta);
    printf("a area da parede é %0.2fm²\n",(larg*alt));
    printf("a quantidade de baldes de tinta necessaria para preencher a parede é de %.0f baldes de tinta\n",btinta);
    return 0;
}
