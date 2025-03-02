void ft_strlen(char *str)
{
    int tamanho = 0;

    while (*str != '\0')
    {
      tamanho++;
      *str++;
    }
}
#include <stdio.h>

int main()
{
    char *str = "Hello World!";
    int comprimento = ft_strlen(str);

    printf("%s\n", comprimento);

    return 0;
}
