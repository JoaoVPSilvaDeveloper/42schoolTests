#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

int    ft_str_is_numeric(char *str)
{
  int limite;
  for (limite = 0;  str[limite] != '\0'; limite++)
  {
    if (!isdigit(str[limite]))
      {
        return false;
      }
  }
  return true;
}

int  main(void)
{
  char str[] = "0123456789W";

  if (ft_str_is_numeric(str) == true)
    printf("true\n");
  else
    printf("false\n");
}