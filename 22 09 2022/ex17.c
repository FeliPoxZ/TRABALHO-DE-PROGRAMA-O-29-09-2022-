/*Fa ̧ca um procedimento que lˆe 50 valores inteiros e retorna o maior e o menor deles.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
float encontra_maior(float);
float encontra_menor(float);
int main()
{
  float numero;
  float num_maior, num_menor;
  for (int i = 0; i < 50; i++)
  {
    puts("Insira um valor: ");
    scanf("%f", &numero);
    num_maior = encontra_maior(numero);
    num_menor = encontra_menor(numero);
  }

  printf("O maior valor entre eles e p %.1f\nO menor valor entre eles e %.1f", num_maior, num_menor);
  return 0;
}

float maior = 0;
float menor = 0;
float encontra_maior(float num)
{
  if (maior < num)
  {
    maior = num;
  }
  else
  {
    maior = maior;
  }
  return maior;
}
float encontra_menor(float num)
{
  if (menor > num)
  {
    menor = num;
  }
  else
  {
    menor = menor;
  }
  return menor;
}
