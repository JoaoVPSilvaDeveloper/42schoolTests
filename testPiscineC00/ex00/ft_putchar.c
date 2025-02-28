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

/*
Login com exame / exame na tela de login no laboratório 42

Abra um terminal e digite kinit <username>sua senha após o prompt

Digite examshellem um terminal para começar

Instalar sublime de/nfs/munki_repo/pkgs/apps/SublimeText/

Você pode acessar isso abrindo Finder --> Ir --> Ir para a pasta (ou [command] + [shift] + G)

Adicione o clique direito do mouse em Preferências do Sistema --> Mouse

Adicione hotcorners em Preferências do Sistema --> Controle da Missão --> Hotcorners

Se você precisar usar o Vim, adicione realce de sintaxe com:syntax on

Não se esqueça de limpar, comentar, remover seu código de teste, execs e bibliotecas antes do envio

Não se esqueça de enviar seu código regularmente para o rendu/<test question>diretório do vogsphere antes de digitar grademe e y no terminal examshell

Leia todos os assuntos e exemplos novamente antes do envio final

*/