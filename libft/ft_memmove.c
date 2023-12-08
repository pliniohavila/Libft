#include "libft.h"

void    *ft_memmove(void *dest, void *src, size_t n)
{
    unsigned char    *cdest;
    const unsigned char    *csrc;

    if ((!dest) && (!src))
        return (dest);
    cdest = (unsigned char*)dest;
    csrc = (unsigned char*)src;
    if ((dest > src) && (dest < src + n))
    {
        cdest += n - 1;
        csrc += n - 1;
        while (n--)
            *cdest-- = *csrc--;
    }
    else
    {
        while (n--)
            *cdest++ = *csrc++;
    }
    return (dest);
}