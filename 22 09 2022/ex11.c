#include <stdio.h>

int calcula_sequencia(int, int, int);
int main()
{
  int numero1, numero2, numero3;
  int resultado;
  puts("Insira 3 numeros: ");
  scanf("%i %i %i", &numero1, &numero2, &numero3);
  resultado = calcula_sequencia(numero1, numero2, numero3);
  switch (resultado)
  {
  case 0:
    printf("%i, %i, %i", numero3, numero2, numero1);
    break;
  case 1:
    printf("%i, %i, %i", numero2, numero3, numero1);
    break;
  case 2:
    printf("%i, %i, %i", numero3, numero1, numero2);
    break;
  case 3:
    printf("%i, %i, %i", numero1, numero3, numero2);
    break;
  case 4:
    printf("%i, %i, %i", numero2, numero1, numero3);
    break;
  case 5:
    printf("%i, %i, %i", numero1, numero2, numero3);
    break;
  default:
    break;
  }
  return 0;
}

int calcula_sequencia(int num1, int num2, int num3)
{
  if ((num1 > num2) && (num2 > num3))
  {
    return 0;
  }
  else if ((num1 > num3) && (num3 > num2))
    return 1;
  else if ((num2 > num1) && (num1 > num3))
    return 2;
  else if ((num2 > num3) && (num3 > num1))
    return 3;
  else if ((num3 > num1) && (num1 > num2))
    return 4;
  else if ((num3 > num2) && (num2 > num1))
    return 5;
}

/*
n1 > n2 > n3
n1 > n3 > n2
n2 > n1 > n3
n2 > n3 > n1
n3 > n1 > n2
n3 > n2 > n1
*/