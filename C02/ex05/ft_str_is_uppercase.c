#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int limite;
    limite = 0;

    if (str[limite] == '\0')
    {
        return (1);
    }
    while (str[limite] != '\0')
    {
        if (!(str[limite] >= 'A' && str[limite] <= 'Z'))
            return (0);
        limite++;
    }
    return (1);
}
/*
int main(void)
{
    char str[] = "HELLO";

    if (ft_str_is_lowercase(str))
        printf("true\n");
    else
        printf("false\n");
}*/