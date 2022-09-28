#include <stdio.h>
#include <math.h>

int calcula_somatorio(int);

int main()
{
  int numero;
  puts("Insira um numero que deseja saber seu somatorio");
  scanf("%i", &numero);
  printf("O somatorio e de %i", calcula_somatorio(numero));
  return 0;
}

int calcula_somatorio(int num)
{
  int resultado = 0;
  for (int i = 1; i <= num; i++)
  {
    resultado = resultado + i;
  }
  return resultado;
}