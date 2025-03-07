char  *ft_strncpy(char *dest, char *src, int n)
{
  int start;
  start = 0;

  while (src[start] != '\0' && start < n)
  {
    dest[start] = src[start];
    start++;
  }
  while (start < n)
  {
    dest[start] = '\0';
    start++;
  }
  return (dest);
}
/*
#include <stdio.h>
int main()
{
  int limite = 5;
  char src[] = "Hello World!";
  char dest[50];

  ft_strncpy(dest, src, limite);
  printf("Depois da funcão: %s\n", dest);
}*/