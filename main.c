#include <stdio.h>
#include <string.h>
#include "libft.h"

#define SIZE 30


int     main(void)
{
    char    buf1[SIZE];
    char    buf2[15];

    memset(buf1, 0, SIZE);
    memset(buf2, 0, SIZE);
    strcpy(buf1, "Chiquita");
    ft_memccpy(buf2, buf1, 'u', SIZE);
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

void    *ft_memccpy(void *dest, void *src, int c, size_t n)
{
    unsigned char    *cdest;
    unsigned char    *csrc;
    size_t  i;

    if ((!dest) && (!src))
        return (NULL);
    if (!(dest < src))
    {
        printf("Error\n");
        return NULL;
    }
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