#include <unistd.h>
#include <stdio.h>

void ft_ultimate_ft(int *********ptr)
{
  *********ptr = 1;
}

int main()
{
  int valor = 55;
  int *ptr1 = &valor;
  int **ptr2 = &ptr1;
  int ***ptr3 = &ptr2;
  int ****ptr4 = &ptr3;
  int *****ptr5 = &ptr4;
  int ******ptr6 = &ptr5;
  int *******ptr7 = &ptr6;
  int ********ptr8 = &ptr7;

  printf("Valor antes: %d\n",valor);
  ft_ultimate_ft(&ptr8);
  printf("Valor depois: %d\n",valor);

  return 0;
}
