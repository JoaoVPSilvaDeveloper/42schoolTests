#include <stdio.h>

int ft_str_is_printable(char *str)
{
  int limite;
  limite = 0;

  if (str[limite] == '\0')
  {
    return (1);
  }

  while (str[limite] != '\0')
  {
    if (!(str[limite] >= 32 && str[limite] <= 127))
      return (0);
    limite++;
  }
  return (1);
}
/*
int main(void) {
  char str[] = "hello\n";

  printf("%d\n", ft_str_is_printable(str));

  return 0;
}*/