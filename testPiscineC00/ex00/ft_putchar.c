#include <unistd.h>

// https://gist.github.com/douglasabnovato/c42e692aa25451e95b6db2bc779948a0


void ft_putchar(char c)
{
    write(1, &c, 1);
}

// --------------------------------------

int main(void)
{
    ft_putchar('d');
}


/*
Comando no terminal para norminette:
$ norminette "arquivo".c

Comando no terminal para compilar código:
$ gcc -Wall -Wextra -Werror "arquivo".c
Comando no terminal para exibir:
$./a.out

*/