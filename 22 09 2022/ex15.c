/*Fa ̧ca uma fun ̧c ̃ao que leia um n ́umero n ̃ao determinado de valores positivos e retorna
a m ́edia aritm ́etica dos mesmos.*/

#include <stdio.h>
float calcula_media(float);
int main()
{
  float numero;
  float resultado;

  puts("Insira os numeros que deseja calcular a media:");
  scanf("%f", &numero);
  resultado = calcula_media(numero);
  printf("A MEDIA ARITIMETICA E DE %.2f", resultado);
  return 0;
}

float calcula_media(float num)
{
  int i = 0;
  char checa;
  float total = 0, media, cont = 0;
  while (i == 0)
  {
    total += num;
    cont++;
    puts("Deseja adicionar um novo numero a conta?\nSim - S\nNao - N");
    fflush(stdin);
    scanf("%c", &checa);
    if ((checa == 'S') || (checa == 's'))
    {
      i = 0;
    }
    else
    {
      i = 1;
      break;
    }
    puts("Insira o novo numero: ");
    scanf("%f", &num);
  }

  media = total / cont;
  return media;
}
