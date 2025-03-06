#include <stdio.h>

int ft_str_is_lowercase(char *str) {
    int limite;

    for (limite = 0;  str[limite] != '\0'; limite++) {
        if (str[limite] < 'A' || str[limite] > 'Z') {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    char str[] = "HELLO";

    if (ft_str_is_lowercase(str))
        printf("true\n");
    else
        printf("false\n");
}