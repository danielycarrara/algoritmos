#include <stdio.h>

int main ()
{
float P,V,T,TP;
printf("Digite o valor: \n");
scanf("%f",&V); 
printf("Digite o tempo: \n");
scanf("%f",&T);
printf("Digite a taxa percentual: \n");
scanf("%f",&TP);
P=V+(V*(TP/100)*T);
printf("O valor da prestacao e: %f \n",P);
}