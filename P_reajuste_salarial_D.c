#include <stdio.h>

int main ()
{
float SM,PR,NS;
printf("Digite o valor de SM: \n");
scanf("%f",&SM);
printf("Digite o valor de PR: \n");
scanf("%f",&PR);
NS=SM+(1+PR/100);
printf("O valor de NS e: %f \n",NS);
}