#include <stdlib.h>
#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *str;
    char    str_len;

    if (!s1 || !s2)
        return (NULL);
    str_len = ft_strlen(s1) + ft_strlen(s2) + 1;
    str = (char*)malloc(sizeof(char) * str_len);
    if (!str)
        return (NULL);
    ft_strlcpy(str, s1, ft_strlen(s1));
    ft_strlcat(str, s2, str_len);
    return (str);
}