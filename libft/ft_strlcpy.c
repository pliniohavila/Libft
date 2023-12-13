#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t n)
{
    size_t      i;

    if ((!dst) && (!src))
        return (0);
    if (n == 0)
        return (ft_strlen(src));
    i = 0;
    while ((src[i] != '\0') && i < (n - 1))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}