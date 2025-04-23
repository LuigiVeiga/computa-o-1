#include<stdio.h>
int main()
{
float base, altura, perimetro, rodape, piso;
printf("digite a largura do piso do quarto em metros: ");
scanf("%f",&base);
printf("digite a altura do piso do quarto em metros: ");
scanf("%f",&altura);
perimetro=(base+altura)*2;
rodape=perimetro-0.8;
piso=base*altura;
printf("o perimetro de seu quarto é de %0.2fm\n é necessario %0.2fm de rodapé\n e %0.2fm² de piso.",perimetro,rodape,piso);
}
