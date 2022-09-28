#include <stdio.h>
int verifica_numero_perfeito(int);
int main()
{
  unsigned int numero;
  int resultado;
  puts("Insira o valor inteiro que desejas saber se e perfeito: ");
  scanf("%i", &numero);
  resultado = verifica_numero_perfeito(numero);
  if (resultado == 1)
  {
    printf("O numero %i e perfeito", numero);
  }
  else
  {
    printf("O numero %i nao e perfeito", numero);
  }
  return 0;
}

int verifica_numero_perfeito(int num)
{
  if (num == 1)
    return 1;

  int divisores, resultado;
  divisores = 0;
  for (int i = 1; i < num; i++)
  {
    resultado = num % i;
    if (resultado == 0)
    {
      divisores += i;
    }
  }

  if (divisores == num)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}