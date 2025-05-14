#include<stdio.h>
#include<math.h>
void calcula_raizes(float a, float b, float c, float *x1, float *x2)
{
*x1 = ((b*-(1))+sqrt((b*b)-4*a*c))/2*a;
*x2 = ((b*-(1))-sqrt((b*b)-4*a*c))/2*a;
}
int main()
{
float a, b, c, x1, x2;
printf("digite valores a b c ");
scanf("%f %f %f", &a,&b,&c);
calcula_raizes(a,b,c,&x1,&x2);
printf("%f,%f",x1,x2);
}
