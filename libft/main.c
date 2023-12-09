#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"

#define SIZE 30


int     main(void)
{
    int    *buf1;
    int    *buf2;

    buf1 = (int*)calloc(10, sizeof(int));
    buf2 = (int*)ft_calloc(10, sizeof(int));

    printf("\nCom calloc: ");
    for(int i = 0; i < 10; i++)
        printf("%d ", buf1[i]);

    printf("\nCom ft_calloc: ");
    for(int i = 0; i < 10; i++)
        printf("%d ", buf2[i]);

    return (0);
}

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

void 	*ft_calloc(size_t nelem, size_t elsize)
{
    void    *ptr;

    if ((nelem == 0) || (elsize == 0))
        nelem = elsize = 0;
    ptr = malloc(nelem * elsize);
    if (ptr)
        ft_bzero(ptr, nelem * elsize);
    return (ptr);
}
