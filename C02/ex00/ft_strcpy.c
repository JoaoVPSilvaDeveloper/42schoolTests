char    *ft_strcpy(char *dest, char *src)
{
  char *inicio = dest;

  while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';

    return inicio;
}
/*
#include <stdio.h>
int main()
{
  char src[] = "Hello World!";
  char dest[50];

  ft_strcpy(dest, src);

  printf("%s\n", dest);

  return 0;
}
*/

