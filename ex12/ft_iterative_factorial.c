#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int i;
    int result;

    i = 1;
    result = 1;
    if (nb <= 0 || nb > 12) 
        return 0;
    if (nb == 1)
        return 1;
    while (i <= nb)
    {
        result *= i;
        i++;
    }
    return result;
}

int main(void)
{
    printf("%d\n",ft_iterative_factorial(4));
    return (0);
}
