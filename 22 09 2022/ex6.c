#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int converta_dias(int, int, int);

int main()
{
  int anos, meses, dias, resultado;
  puts("Insira a idade da pessoa em X anos Y meses e Z dias:");
  scanf("%i %i %i", &anos, &meses, &dias);
  resultado = converta_dias(anos, meses, dias);
  printf("A quantidade de dias e de %i", resultado);
  return 0;
}

int converta_dias(int a, int m, int d)
{
  int meses, dias;
  meses = (a * 12) + m;
  dias = (meses * 30) + d;
  return dias;
}