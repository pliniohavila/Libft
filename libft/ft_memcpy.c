#include "libft.h"

void    *ft_memcpy(void *dest, void *src, size_t n)
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
        i++;
    }
    return (dest);
}