#include <stdio.h>
/*
Escreva um procedimento que recebes 3 valores reais X, Y e Z e que verifique se
esses valores podem ser os comprimentos dos lados de um triˆangulo e, neste caso,
retornar qual o tipo de triˆangulo formado. Para que X, Y e Z formem um triˆangulo
 ́e necess ́ario que a seguinte propriedade seja satisfeita: o comprimento de cada lado
de um triˆangulo  ́e menor do que a soma do comprimento dos outros dois lados. O
procedimento deve identificar o tipo de triˆangulo formado observando as seguintes
definicoes:
*/
int verfica_possibilidade_triangulo(float, float, float);
int verifica_tipo_triangulo(float, float, float);
int main()
{
  float x, y, z;
  int triangulo;
  puts("Insira 3 valores que desejas saber se e possivel a criação de um triangulo:");
  scanf("%f %f %f", &x, &y, &z);
  if (verfica_possibilidade_triangulo(x, y, z) == 1)
  {
    puts("Os tres valores podem ser comprimento de um triangulo");
    triangulo = verifica_tipo_triangulo(x, y, z);
    if (triangulo == 1)
      puts("O triangulo e equilatero");
    else if (triangulo == 2)
      puts("O triangulo e isosceles");
    else if (triangulo == 0)
      puts("O triangulo e escaleno");
  }
  else
  {
    puts("Os valores nao podem ser valores de um triangulo");
  }
  return 0;
}

int verfica_possibilidade_triangulo(float x, float y, float z)
{
  if ((x < (y + z)) && (y < (x + z)) && (z < (x + y)))
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int verifica_tipo_triangulo(float x, float y, float z)
{
  if ((x == y) && (y == z) && (x == z))
    return 1;
  else if ((x == y) || (x == z) || (y == z))
    return 2;
  else if ((x != y) && (x != z) && (y != z))
    return 0;
}