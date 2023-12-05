#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t          i;
    unsigned char   *buf;

    i = 0;
    buf = (unsigned char*)s;
    while(i < n)
        buf[i++] = '\0';

    return;
}