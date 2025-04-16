#include<stdio.h>
int main()
{
    int senha;
    senha=0;
    while(senha!=2002)
    {
        printf("digite a senha:\n");
        scanf("%d",&senha);
        if (senha!=2002)
            printf("Senha invalda\n");
            else
                printf("Acesso permitido\n");
    }
    return 0;
}
