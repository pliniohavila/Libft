#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char     *buf;
    unsigned char           cmp;
    size_t                  i;

    buf = (unsigned char*)s;
    cmp = (unsigned char)c;
    i = 0;
    while (i < n)
    {
        if (buf[i] == cmp)
            return ((void*)s + i);
        i++;
    }
    return (NULL);
}