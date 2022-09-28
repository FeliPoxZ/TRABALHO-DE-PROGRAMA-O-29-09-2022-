#include <stdio.h>

float calcula_peso_ideal(char, float);
int main()
{
  char sexo;
  float altura, resultado;
  puts("Insira o sexo da pessoa:");
  fflush(stdin);
  scanf("%c", &sexo);
  puts("Insira a altura da pessoa:");
  scanf("%f", &altura);
  resultado = calcula_peso_ideal(sexo, altura);
  printf("O peso ideal e de %.3f", resultado);
  return 0;
}

float calcula_peso_ideal(char sex, float alt)
{
  return (sex == 'M') ? (72.7 * alt) - 58 : (62.1 * alt) - 44.7;
}