#include <stdio.h>
#include <math.h>

float calcula_media(float, float, float, char);
int main()
{
  float nota1, nota2, nota3, media;
  char tipo_media;
  puts("Insira as 3 notas do aluno\nE o tipo de conta que deseja fazer\nA - Media aritimetica\nP - Media ponderada\nH - media harmonica\n");
  scanf("%f %f %f", &nota1, &nota2, &nota3);
  fflush(stdin);
  scanf("%c", &tipo_media);
  media = calcula_media(nota1, nota2, nota3, tipo_media);
  printf("O resultado e de %.2f", media);
  return 0;
}

float calcula_media(float n1, float n2, float n3, char t_m)
{
  float med;
  switch (t_m)
  {

  case 'A':
    med = (n1 + n2 + n3) / 3;
    break;
  case 'P':
    med = ((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10;
    break;
  case 'H':
    med = 3 / ((pow(n1, -1)) + (pow(n2, -1)) + (pow(n3, -1)));
    break;
  default:
    puts("Insira um tipo valido de conta");
    break;
  }

  return med;
}