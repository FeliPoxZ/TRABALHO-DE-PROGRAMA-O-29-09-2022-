#include <stdio.h>
// considerando negativo ser o numeri booleano 0 e positivo 1

int verifica_positivo_negativo(int);
int main()
{
  int numero;
  puts("Insira um numero inteiro:");
  scanf("%i", &numero);
  if (verifica_positivo_negativo(numero) == 0)
    printf("O numero %i e negativo", numero);
  else
    printf("O numero %i e positivo", numero);

  return 0;
}

int verifica_positivo_negativo(int num)
{
  if (num < 0)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}