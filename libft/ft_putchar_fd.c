#include <unistd.h>
#include "libft.h"

void    ft_putchar_fd(char c, int fd)
{
    char    buf[1];

    buf[0] = c;
    write(fd, buf, 1);
}