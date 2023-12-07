#include "libft.h"

char    *ft_strchr(const char *s, size_t c)
{
    size_t      i;
    char        cmp;

    i = 0;
    cmp = (char)c;
    while (s[i] != '\0')
    {
        if (s[i] == cmp)
            return ((char*)&s[i]);
        i++;
    }
    return (NULL);
}