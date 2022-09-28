#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int verifica_primo(int);

int main()
{
  unsigned int numero;
  int resultado;
  puts("Insira um valor inteiro positivo: ");
  scanf("%i", &numero);
  resultado = verifica_primo(numero);
  if (resultado != 0)
    printf("O numero %i e primo", numero);
  else
    printf("O numero %i nao e primo", numero);
  
  return 0;
}

int verifica_primo(int num)
{
  int count = 0;
  int result;
  if (num == 1)
  {
    return 1;
  }
  for (int i = 1; i <= num; i++)
  {
    result = num % i;
    if (result == 0)
    {
      count++;
    }
  }
  if (count == 2)
  {
    return 1; // verdadeiro por tanto e primo
  }
  else
  {
    return 0; // falso por tanto nao primo
  }
}