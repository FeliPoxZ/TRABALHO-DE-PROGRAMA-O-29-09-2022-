#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcula_baskara_positivo(int, int, int, double);
float calcula_baskara_negativo(int, int, int, double);
int main()
{
  int a, b, c;
  float resultado_positivo, resultado_negativo;
  double delta;
  puts("Insira os valores necessario para calcular a formula de baskara\nsendo o 1 valor referente ao A, o 2 referente ao B e o terceiro referente ao C: ");
  scanf("%i %i %i", &a, &b, &c);

  delta = (pow(b, 2)) - (4 * a * c);
  printf("Delta = %f\n", delta);

  if (delta < 0)
  {
    printf("Impossivel encontrar as raizes\n");
  }
  else
  {
    resultado_positivo = calcula_baskara_positivo(a, b, c, delta);
    resultado_negativo = calcula_baskara_negativo(a, b, c, delta);
    printf("As raizes sao %.2f e %.2f", resultado_positivo, resultado_negativo);
  }
  return 0;
}

float calcula_baskara_positivo(int a, int b, int c, double delta)
{
  double x1, x1_fina1;
  x1 = (b * -1) + (sqrt(delta));
  x1_fina1 = x1 / (2 * a);
  return x1_fina1;
}
float calcula_baskara_negativo(int a, int b, int c, double delta)
{
  float x2, x2_final;
  x2 = (b * -1) - (sqrt(delta));
  x2_final = x2 / (2 * a);
  return x2_final;
}