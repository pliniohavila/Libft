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
    printf("memchr: %s\n", (char*)memchr(buf1, 'a', strlen(buf1)));
    printf("ft_memchr: %s\n", (char*)ft_memchr(buf1, 'a', strlen(buf1)));
    return (0);
}

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