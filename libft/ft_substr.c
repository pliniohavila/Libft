#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char        *str;
    int         i;

    if (!s)
        return (NULL);
    str = (char*)malloc(sizeof(char) * (len - (size_t)start));
    s = s + start;
    i = 0;
    while (len-- > 0)
        str[i++] = *s++;
    return (str);
}