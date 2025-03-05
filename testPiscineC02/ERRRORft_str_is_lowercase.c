#include <stdio.h>

int ft_str_is_alpha(char *str) {
    int limite;

    for (limite = 0;  str[limite] != '\0'; limite++) {
        if (str[limite] < 'a' || str[limite] > 'z') {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    char str[] = "hello";

    if (ft_str_is_alpha(str))
        printf("true\n");
    else
        printf("false\n");
}