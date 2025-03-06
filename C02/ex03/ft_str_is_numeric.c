#include <stdio.h>

int ft_str_is_numeric(char *str)
{
  int limite;

  limite = 0;
  if (str[limite] == '\0')
  {
    return (1);
  }
  while (str[limite] != '\0')
  {
    if (!(str[limite] >= '0' && str[limite] <= '9'))
      return (0); 
    limite++;
  }
  return (1);
}
/*
int  main(void)
{
  char str[] = "123456789";

  if (ft_str_is_numeric(str))
    printf("true\n");
  else
    printf("false\n");
}*/