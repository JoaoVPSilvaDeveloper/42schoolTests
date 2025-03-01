#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
    int temporarario = *a;
    *a = *b;
    *b = temporarario;
}

int	main()
{
    int x = 1, y = 5;
    int *ptr1 = &x;
    int *ptr2 = &y;

    printf("Antes da troca: x = %d; y = %d\n", x, y);
    ft_swap(ptr1, ptr2);
    printf("Depois da troca: x = %d; y = %d\n", x, y);

    return (0);
}
