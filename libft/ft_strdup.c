#include <stdlib.h>
#include "libft.h"

char    *ft_strdup(const char *s)
{
    char    *str;
    int     i;
    int     str_len;

    if (!s)
        return (NULL);
    str_len = (int)ft_strlen(s);
    str = (char*)malloc(sizeof(char) * str_len);
    if (!str)
        return (NULL);
    i = 0;
    while (i < str_len)
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}