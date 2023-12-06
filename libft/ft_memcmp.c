#include "libft.h"

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