#include <stdio.h>
#include <string.h>
#include "libft.h"

#define SIZE 30


int     main(void)
{
    char    buf1[SIZE];
    char    buf2[SIZE];

    memset(buf1, 0, SIZE);
    memset(buf2, 0, SIZE);
    strcpy(buf1, "Chiquita and Mel!");
    strcpy(buf2, "Chiquita end Mel!");
    printf("memcmp: %d\n", memcmp(buf1, buf2, strlen(buf1)));
    printf("ft_memcmp: %d\n", ft_memcmp(buf1, buf2, strlen(buf1)));
    return (0);
}

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char     *p1;
    const unsigned char     *p2;

    if (((!s1) && (!s1)) || n == 0)
        return (0);
    p1 = (unsigned char*)s1;
    p2 = (unsigned char*)s2;
    while (n-- > 0)
    {
        if (*p1 < *p2)
            return (-1);
        else if (*p1 > *p2)
            return (1);
        p1++;
        p2++;
    }
    return (0);
}