#include "libft.h"

int ft_numlen(int n)
{
    int i;
    i = 0;
    if (n <= 0)
    {
        n = n * -1;
        i++;
    }
    while (n)
    {
        n = n / 10;
        i++;
    }
    return i;
}

char *ft_itoa(int n)
{
    int i;
    char *str;

    i = ft_numlen(n);
    str = ft_calloc(i + 1, sizeof(char));
    if(!str)
        return NULL;
    if (n == 0)
        str[0] = '0';
    if (n < 0)
    {
        str[0] = '-';
        if (n == -2147483648)
        {
            str[--i] = '8';
            n = n / 10;
        }
        n = n * -1;
    }
    while (i-- && n != 0)
    {
        str[i] = n % 10 + '0';
        n = n / 10;
    }
    return str;
}