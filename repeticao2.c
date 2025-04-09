#include<stdio.h>
int main()
{
    int n, i=1;
    printf("digite um número");
    scanf("%d",&n);
    while(i<=100)
    {
        int r = i%n;
        i=i+1;
        if(r==2)
            printf("%d\n",(i-1));
    }
    return 0;
}
