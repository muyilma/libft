#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int a;
    a = ft_strlen(s1) + ft_strlen(s2);
    char *str;

    str = malloc(a + 1);
    if(str==NULL)
    return NULL;
    int i;

    i = 0;

    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    int b;
    b=0;
    while (s2[b])
    {
        str[i] = s2[b];
        b++;
        i++;
    }
    str[i] = '\0';

    return str;
}
