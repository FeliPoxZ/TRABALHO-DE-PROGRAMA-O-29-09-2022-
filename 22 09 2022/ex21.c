#include <stdio.h>
#include <math.h>

float calcula_s(int);
int main()
{
  int n;
  puts("Insira um valor inteiro N: ");
  scanf("%i", &n);
  // printf("%i\n", n);
  float resultado;
  resultado = calcula_s(n);
  printf("O s = %.2f", resultado);
  return 0;
}

float calcula_s(int num)
{
  float s = 0;
  for (int i = 1; i <= num; i++)
  {
    s += pow(i, -1);
  }
  return s;
}