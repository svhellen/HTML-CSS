#include <stdio.h>

int main(void)
{
  int num;

  printf("How many scores do you have to calculate? ");
  scanf("%i",&num);

  int soma;
  int aux;
  int i;
  int score[num];
  soma = 0;
  for (i = 1; i<= num; i++)
  {
    printf("Score %i", i);
    scanf("%i",&score[i]);
    //soma = soma + aux
    soma = soma + score[i];
    //aux = score[i];
  }

  printf("Average: %f\n", (score[num]) / (float) num);

}