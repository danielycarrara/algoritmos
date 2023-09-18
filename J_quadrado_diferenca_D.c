#include <stdio.h>

int main ()
{
float A,B,C,D;
printf("Digite o valor de A: \n");
scanf("%f",&A);
printf("Digite o valor de B: \n");
scanf("%f",&B);
C=A-B;
printf("O valor de C e: %f \n",C);
D=pow(C,2);
printf("O valor de D e: %f \n",D);
}