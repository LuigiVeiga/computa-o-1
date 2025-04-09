#include<stdio.h>
int main()
{
    float c;
    printf("insira o consumo de água em m³ da residência/n");
    scanf("%f",&c);
    if (c<=10)
        printf("o valor da conta de água é R$%.2f\n",7.0);
    else if (c>10 && c<=30)
        printf("o valor da conta de água é R$%.2f\n",((c-10)+7));
    else if (c>30 && c<=100)
        printf("o valor da conta de água é R$%.2f\n",((c-30)*2+27));
    else
        printf("o valor da conta de água é R$%.2f\n",((c-100)*5+167));
    return 0;
}
