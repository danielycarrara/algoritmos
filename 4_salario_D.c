#include <stdio.h>

int main ()
{
float VH,QHT,PD,SB,VD,SL;
printf("Digite o valor da hora-aula: \n");
scanf("%f",&VH);
printf("Digite o valor de horas trabalhadas: \n");
scanf("%f",&QHT);
SB=VH*QHT;
printf("O valor do salario bruto e: %f \n",SB);
printf("Digite o valor do percentual de desconto: \n");
scanf("%f",&PD);
VD=SB*(PD/100);
printf("O valor de desconto e: %f \n",VD);
SL=SB-VD;
printf("O valor do salario liquido e: %f \n",SL);
}