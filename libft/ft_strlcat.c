#include "libft.h"


size_t  ft_strlcat(char *dst, const char *src, size_t n)
{
    size_t      i;

    if ((!dst) && (!src))
        return (0);
    if (n == 0)
        return (ft_strlen(src));
    i = ft_strlen(dst);
    while ((*src != '\0') && (i < (n - 1)))
        dst[i++] = *src++;
    dst[i] = '\0';
    return (n + ft_strlen(src));
}