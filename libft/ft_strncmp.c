#include "libft.h"

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t      i;

    if (!s1 || !s2)
        return (0);
    if (ft_strlen(s1) == 0 && ft_strlen(s2) > 0)
        return (-1);
    if (ft_strlen(s1) > 0 && ft_strlen(s2) == 0)
        return (1);
    i = 0;
    while ((i < n) && (s1[i] != '\0'))
    {
        if (s1[i] > s2[i])
            return (1);
        if (s1[i] < s2[i])
            return (-1);
        i++;
    }
    return(0);
}