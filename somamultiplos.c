#include<stdio.h>
#include<stdio.h>
int main()
{
    int base,ii,fi,i;
    printf("digite o número que deseja descobrir a soma dos multiplos");
    scanf("%d",&base);
    printf("digite o valor inicial do intervalo: ");
    scanf("%d",&ii);
    printf("digite o valor final do intervalo: ");
    scanf("%d",&fi);
    i=0;
    while(ii<=fi)
    {
        if(ii%base==0)
        {
            i=ii+i;
        }
        ii=ii+1;
    }
    printf("a soma dos multiplos do número escolhido no intervalo desejado é %d",i);
    return 0;
}
