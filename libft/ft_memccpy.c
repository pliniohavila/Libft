#include "libft.h"

void    *ft_memccpy(void *dest, void *src, int c, size_t n)
{
    unsigned char    *cdest;
    unsigned char    *csrc;
    size_t  i;

    if ((!dest) && (!src))
        return (NULL);
    cdest = (unsigned char*)dest;
    csrc = (unsigned char*)src;
    i = 0;
    while (i < n)
    {
        cdest[i] = csrc[i];
        if (csrc[i] == c)
            return (dest);
        i++;
    }
    return (dest);
}