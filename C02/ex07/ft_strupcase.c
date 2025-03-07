char *ft_strupcase(char *str)
{
    int limite;
    limite = 0;

    while (str[limite] != '\0')
    {
        if (str[limite] >= 'a' && str[limite] <= 'z')
            str[limite] = str[limite] - 32;
        limite++;
    }
}