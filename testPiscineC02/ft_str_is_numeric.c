#include <stdio.h>
/*
int    ft_str_is_numeric0(char *str)
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
*/

int    ft_str_is_numeric(char *str)
{
  int limite;

  for (limite = 0;  str[limite] != '\0'; limite++) {
    if (str[limite] < '0' || str[limite] > '9') {
      return 0;
      }
  }
  return 1;
}

int  main(void)
{
  char str[] = "123456789";

  if (ft_str_is_numeric(str))
    printf("true\n");
  else
    printf("false\n");
}