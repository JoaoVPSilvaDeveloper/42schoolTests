#include <stdio.h>

/*
 * Talvez tenha que usar CONST CHAR no lugar do CHAR da função
 * Só conseguir fazer funcionar com CONST CHAR
 */
int ft_str_is_printable(char *str) {
  int limite = 0;

  while (str[limite] != '\0') {
    if (str[limite] < 32 || str[limite] > 126) {
      return 0;
    }
    limite++;
  }
  return 1;
}

int main(void) {
  char str[] = "hello\n";

  printf("%d\n", ft_str_is_printable(str));

  return 0;
}