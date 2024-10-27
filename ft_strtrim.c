#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    i=0;
    int j;
    while(s1[i])
    {
        j=0;
         while(s1[i+j]==set[j])
         {
            if(set[j+1]=='\0')
            {
                 j++;
                return (char *)s1+i+j;
            }
            if(s1[i+j]!=set[j])
            {
                 j++;
            }
           j++;

         }
         i++;
    }
     return NULL;
}

int main()
{
    printf("%s",ft_strtrim("muustafa","mus"));
}

