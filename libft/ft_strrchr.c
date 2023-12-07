#include "libft.h"


char    *ft_strrchr(const char *s, size_t c)
{
    size_t      i;
    char        cmp;

    i = ft_strlen(s);
    cmp = (char)c;
    while (i > 0)
    {
        if (s[i] == cmp)
            return ((char*)&s[i]);
        i--;
    }
    return (NULL);
}