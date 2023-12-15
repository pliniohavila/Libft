#include <unistd.h>
#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    char    *buf;

    buf =  ft_itoa(n);
    write(fd, buf, ft_strlen(buf));
}