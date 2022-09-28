#include <stdio.h>

int converta_minutos(int, int);
int converta_horas(int);
int converta_horas_minutos(int);

int main()
{
  int horas_inicio, horas_ginal, minutos_inicio, minutos_final, resultado_inicio, resultado_final;
  puts("Insira o horario de inicio em horas e minutos:");
  scanf("%i %i", &horas_inicio, &minutos_inicio);
  puts("Insira o horario final do jogo em horas e minutos: ");
  scanf("%i %i", &horas_ginal, &minutos_final);

  resultado_final = converta_minutos(horas_ginal, minutos_final);
  resultado_inicio = converta_minutos(horas_inicio, minutos_inicio);
  int conta;
  conta = resultado_final - resultado_inicio;
  if (conta < 0)
  {
    conta = conta * -1;
  }

  int result1, result2;
  result1 = converta_horas(conta);
  result2 = converta_horas_minutos(conta);

  printf("O jogo durou %i horas e %i min\n", result1, result2);
  return 0;
}
int converta_minutos(int h, int m) // converte tudo pra min
{
  int resultado;
  resultado = (h * 60) + m;
  return resultado;
}
int converta_horas(int min) // encontra as horas
{
  int resultado;
  resultado = (min / 60);
  return resultado;
}

int converta_horas_minutos(int min) // encontra os minutos
{
  int resultado;
  resultado = (min % 60);
}