#include <stdio.h>

int main ()
{
float T,V,D,LU;
printf("Digite o valor do tempo: \n");
scanf("%f",&T);
printf("Digite o valor da velocidade: \n");
scanf("%f",&V);
D=T*V;
printf("O valor da distancia e: %f \n",D);
LU=D/12;
printf("O valor de litros usados e: %f \n",LU);
}