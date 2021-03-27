#include <stdio.h>

int main(void)
{
  float num1, num2, num3, multiplicacao;


//Números

  printf("Digite um numero: ");
  scanf("%f", &num1);

  printf("Digite outro numero: ");
  scanf("%f", &num2);

  printf("Digite mais um numero: ");
  scanf("%f", &num3);

//Multiplicação

 multiplicacao = num1*num2*num3;
 printf("%f", multiplicacao);







 return 0;
}