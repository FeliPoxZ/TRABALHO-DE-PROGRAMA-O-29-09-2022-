#include <stdio.h>

// considerando o par como o numero booleano 0 e impar o 1
int verificar_par_impar(int);
int main()
{
  int numero;
  puts("Insira um numero inteiro:");
  scanf("%i", &numero);
  if (verificar_par_impar(numero) == 0)
    printf("O numero %i e par", numero);
  else
    printf("O numero %i e impar", numero);

  return 0;
}
int verificar_par_impar(int num)
{
  int verificar;
  verificar = num % 2;
  if (verificar == 0)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}
