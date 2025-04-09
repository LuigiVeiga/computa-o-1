#include <stdio.h>
int main()
{
    float A, G, Ra, Rg;
    printf("digite o preço do litro de álcool e da gasolina respectivamente. Em segida digite o rendimentos de ambos em km/l\n");
    scanf("%f %f %f %f", &A, &G, &Ra, &Rg);
    if ((Ra/A)>(Rg/G))
        printf("a Frota de taxi deve abastecer com álcool");
    else
        printf("a Frota de taxi deve abastecer a frota com gasolina");
    return 0;
}
