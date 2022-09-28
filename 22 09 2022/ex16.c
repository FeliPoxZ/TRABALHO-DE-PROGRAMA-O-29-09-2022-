/*Fa ̧ca uma fun ̧c ̃ao que receba um valor inteiro e positivo e calcula o seu fatorial.*/

#include <stdio.h>
unsigned long int calcula_fatorial(long int);
int main()
{
  unsigned long int numero;
  puts("Insira o valor inteiro positivo que deseja saber o fatorial: ");
  scanf("%i", &numero);
  printf("O fatorial de %i e de %ld", numero, calcula_fatorial(numero));
  return 0;
}
unsigned long int calcula_fatorial(long int num)
{
  unsigned long int resultado = 1;
  for (int i = 1; i <= num; i++)
  {
    resultado = resultado * i;
  }
  return resultado;
}