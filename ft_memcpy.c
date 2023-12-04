#include "libft.h"

void    *ft_memcpy(void *dest, void *src, size_t n)
{
    char    *cdest;
    char    *csrc;
    size_t  i;

    if ((!dest) && (!src))
        return (NULL);
    cdest = (char*)dest;
    csrc = (char*)src;
    i = 0;
    while (i < n)
    {
        cdest[i] = csrc[i];
        i++;
    }
    return (dest);
}