#include <stdio.h>

int main ()
{
float V,R,A;
printf("Digite o valor do raio: \n");
scanf("%f",&R);
printf("Digite o valor da altura: \n");
scanf("%f",&A);
V=3.14*(R*R)*A;
printf("O valor do volume e: %f \n",V);
}