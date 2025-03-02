void ft_div_mod(int a, int b, int *div, int *mod)
{
   *div = a / b;
   *mod = a % b;
}
/*
#include <stdio.h>

int main(void)
{
   int x = 10, y = 2;

   int *ptr1 = &x;
   int *ptr2 = &y;

   printf("valor de x: %d, e valor de y: %d\n", x, y);
   ft_div_mod(x, y, ptr1, ptr2);
   printf("valor de x: %d, e valor de y: %d\n", x, y);

}
*/