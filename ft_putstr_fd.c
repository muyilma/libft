#include <unistd.h>
#include <fcntl.h>

void ft_putstr_fd(char *s, int fd)
{
    int i = 0;
    while (s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
}
