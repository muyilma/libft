#include "libft.h"

void degistir(char **str, char const *s, char c)
{
    int i;
    int start;
    int index;
    i = 0;
    start = 0;
    index = 0;

    while (s[i])
    {
        if (s[i + 1] == '\0')
            break;
        while (s[i] == c)
            i++;
        start = i;
        while (s[start] != c && s[start])
            start++;
        if (s[start] == c || start > i)
        {
            str[index] = ft_substr(s, i, start - i);
            i = start;
            index++;
        }
    }
    str[index] = NULL;
}

int word(char const *s, char c)
{
    int i;
    int len;
    i = 0;
    len = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i])
            len++;
        while (s[i] && s[i] != c)
            i++;
    }

    return len;
}

char **ft_split(char const *s, char c)
{
    char **a;
    int len;
    len = word(s, c);

    a = malloc((len + 1) * sizeof(char *));
    if (!a)
        return NULL;

    degistir(a, s, c);

    return a;
}
