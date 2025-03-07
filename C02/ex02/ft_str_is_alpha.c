#include <stdio.h>

int ft_str_is_lowercase0(char *str) {
    int limite;

    for (limite = 0;  str[limite] != '\0'; limite++) {
        if (!((str[limite] >= 'a' && str[limite] <= 'z') || (str[limite] >= 'A' && str[limite] <= 'Z'))) {
            return 0;
        }
    }
    return 1;
}

int ft_str_is_alpha(char *str)
{
    int limite;
    limite = 0;

    if (str[limite] == '\0')
    {
        return (1);
    }
    while (str[limite] != '\0')
    {
        if (!((str[limite] >= 'a' && str[limite] <= 'z') || (str[limite] >= 'A' && str[limite] <= 'Z')))
            return (0);
        limite++;
    }
    return (1);
}
/*
int main(void)
{
    char str[] = "Hello";

    if (ft_str_is_lowercase(str))
        printf("true\n");
    else
        printf("false\n");
}*/