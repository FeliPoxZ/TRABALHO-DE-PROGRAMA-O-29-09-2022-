/*A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando
dados sobre o sal ́ario e n ́umero de filhos. Fa ̧ca um procedimento que leia esses
dados para um n ́umero n ̃ao determinado de pessoas e retorne a m ́edia de sal ́ario da
popula ̧c ̃ao, a m ́edia do n ́umero de filhos, o maior sal ́ario e o percentual de pessoas
com sal ́ario at ́e R$350,00.*/

#include <stdio.h>
#include <stdlib.h>

float verfica_maior_salario(float, float);

int main()
{
  float salario, total_salario = 0, media_salario, media_filhos, maior_salario = 0, total_pessoas = 0, percentual_salario;
  float numero_filhos, total_numero_filhos = 0, população = 0;
  int i = 0;
  char escolha;

  while (i == 0)
  {
    printf("Insira o salario do cidadao:\n");
    scanf("%f", &salario);
    printf("Insira o numero de filhos do cidadao: ");
    scanf("%f", &numero_filhos);
    população++;
    total_salario += salario;
    total_numero_filhos += numero_filhos;
    maior_salario = verfica_maior_salario(salario, maior_salario);
    if (salario <= 350)
    {
      total_pessoas++;
    }
    puts("Deseja inserir um novo cidadao?");
    fflush(stdin);
    scanf("%c", &escolha);
    if ((escolha == 'S') || (escolha == 's'))
    {
      i = 0;
    }
    else
    {
      i = 1;
      break;
    }
  }
  media_salario = total_salario / população;
  media_filhos = total_numero_filhos / população;
  percentual_salario = (total_pessoas / população) * 100;
  printf("A media salarial e de R$%.3f\nA media de filhos e de %.2f\n", media_salario, media_filhos);
  printf("O maior salario e de R$%.3f\n", maior_salario);
  printf("A porcentagem de pessoas que ganham ate R$350 e de %.1f%%", percentual_salario);
}

float verfica_maior_salario(float sal, float m_sal)
{
  if (sal > m_sal)
  {
    m_sal = sal;
  }
  else
  {
    m_sal = m_sal;
  }
  return m_sal;
}