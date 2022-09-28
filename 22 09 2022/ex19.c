#include <stdio.h>
int encontra_qtd_divisores(int);
int main()
{
  int numero;
  puts("Insira um valor para encontrar a quantidade de divisores e quais sao: ");
  scanf("%i", &numero);
  printf("A quantidade de divisores que o numero %i tem e de %i divisores", numero, encontra_qtd_divisores(numero));
  return 0;
}

int encontra_qtd_divisores(int num)
{
  int resultado, count = 0;
  for (int i = 1; i <= num; i++)
  {
    resultado = num % i;
    if (resultado == 0)
    {
      printf("o divisores sao %i\n", i);
      count++;
    }
  }
  return count;
}
