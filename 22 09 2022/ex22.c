#include <stdio.h>
#include <math.h>

double calcula_s(int);
int main()
{
  int n;
  puts("Insira um valor inteiro e positivo:");
  scanf("%i", &n);
  printf("s = %f", calcula_s(n));
  return 0;
}

double calcula_s(int num)
{
  unsigned long int fatorial_i = 1;
  float result;
  for (int i = 1; i <= num; i++)
  {
    fatorial_i = fatorial_i * i;
    printf("O fatorial de %i e = %ld\n", i, fatorial_i);
    result += pow(fatorial_i, -1);
  }
  return result;
}