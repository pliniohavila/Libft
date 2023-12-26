#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t n)
{
    size_t      i;
    size_t      k;
    size_t      len_src;
    
    len_src = ft_strlen(src);
    if ((!dst) && (!src))
        return (0);
    if (n == 0)
        return (ft_strlen(src));
    i = ft_strlen(dst);
    k = 0;
    while ((*src != '\0') && (k < n))
    {
        dst[i++] = *src++;
        k++;
    }
    dst[i] = '\0';
    return (n + len_src);
}