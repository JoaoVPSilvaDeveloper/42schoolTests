char  *ft_strncpy(char *dest, char *src, int n)
{

  int i;
  i = 0;
  while (i < n)
}

#include <stdio.h>
int main()
{
  int limite = 5;
  char src[] = "Hello World!";
  char dest[50];

  ft_strncpy(dest, src, limite);
  printf("Depois da funcão: %s\n", dest);
}

