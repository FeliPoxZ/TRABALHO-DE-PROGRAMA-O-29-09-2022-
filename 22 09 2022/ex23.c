#include <stdio.h>
#include <math.h>

double calcula_s(int);
int main()
{
  int n;
  puts("Insira um valor inteiro N: ");
  scanf("%i", &n);
  float resultado;
  resultado = calcula_s(n);
  printf("O resultado de s e = %.4f", resultado);
  return 0;
}

double calcula_s(int num)
{
  float s = 0;
  for (int i = 1; i <= num; i++)
  {
    s += (pow(i, 2) + 1) / (i + 3);
  }
  return s;
}