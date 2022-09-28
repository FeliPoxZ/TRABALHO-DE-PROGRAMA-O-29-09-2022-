#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int converta_segundos_minuto(int);
int converta_minutos_horas(int);

int main()
{
  int segundos, minutos, horas;
  puts("Insira a quantidade de segundos de funcionamento dessa fabrica:");
  scanf("%i", &segundos);
  minutos = converta_segundos_minuto(segundos);
  segundos = segundos % 60;
  printf("%i\n", segundos);
  horas = converta_minutos_horas(minutos);
  minutos = minutos % 60;
  printf("%ih %imin %is", horas, minutos, segundos);
  return 0;
}

int converta_segundos_minuto(int s)
{
  int minutos;
  minutos = (s / 60);
  return minutos;
}

int converta_minutos_horas(int m)
{
  int horas = m / 60;
  return horas;
}