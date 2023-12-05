#include <stdio.h>
#include <string.h>
#include "libft.h"

#define SIZE 30


int     main(void)
{
    char    buf1[SIZE];
    // char    buf2[15];

    memset(buf1, 0, SIZE);
    // memset(buf2, 0, SIZE);
    strcpy(buf1, "Chiquita and Mel!");
    ft_memmove(buf1 + 4, buf1, 8);
    printf("%s\n", buf1);

    return (0);
}

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