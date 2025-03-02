void ft_ultimate_div_mod(int *a, int *b)
{
       int valor1, valor2;
       valor1 = *a;
       valor2 = *b;
       *a = valor1 / valor2;
       *b = valor1 % valor2;
}
/*
#include <stdio.h>

int main()
{
    int a = 15, b = 3;

    printf("Valore de x: %d, e valor de y: %d\n", a, b);
    ft_ultimate_div_mod(&a, &b);
    printf("Valore de x: %d, e valor de y: %d\n", a, b);
}
 */
