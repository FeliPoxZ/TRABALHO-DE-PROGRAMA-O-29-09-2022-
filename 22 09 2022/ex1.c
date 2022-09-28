#include <stdio.h>
#include <math.h>

float calcula_volume(float);
int main()
{
  float raio, volume;
  printf("Insira o raio da circunferencia em cm: ");
  scanf("%f", &raio);
  volume = calcula_volume(raio);
  printf("O volume e de %2.f cm3", volume);
  return 0;
}
float calcula_volume(float r)
{
  float vol;
  vol = (4 * M_PI * pow(r, 3) / 3);
  return vol;
}