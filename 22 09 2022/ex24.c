#include <stdio.h>
#include <math.h>

long int calcula_X_elevado_a_Z(int, int);
int main()
{
  int x, z;
  long int resultado;
  puts("Insira 2 valores inteiros que vao representar respectivamente X e Z:");
  scanf("%i %i", &x, &z);
  resultado = calcula_X_elevado_a_Z(x, z);
  printf("X elevado a Z e = %i", resultado);

  return 0;
}

long int calcula_X_elevado_a_Z(int x, int z)
{
  if (z == 0)
    return 1;
  else
    return x * calcula_X_elevado_a_Z(x, z - 1);
}