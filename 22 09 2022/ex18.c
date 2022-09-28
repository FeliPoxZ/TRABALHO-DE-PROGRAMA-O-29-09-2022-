#include <stdio.h>
#include <math.h>

void tabuada(float);
int main()
{
  float numero, resultado;
  puts("Insira um valor N para ser calculada:");
  scanf("%f", &numero);
  tabuada(numero);
  return 0;
}

void tabuada(float num)
{
  float resultado;
  for (int i = 1; i <= num; i++)
  {
    resultado = num * i;
    printf("\n%i x %.1f = %.1f", i, num, resultado);
  }
}