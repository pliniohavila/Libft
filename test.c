#include <stdio.h>
#include <string.h>
#include "libft.h"

#define SIZE 30


int     main(void)
{
    char    buf1[SIZE];
    char    buf2[SIZE];

    strcpy(buf1, "Chiquita");
    ft_memcpy(buf2, buf1, SIZE);
    printf("%s\n", buf2);

    return (0);
}

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