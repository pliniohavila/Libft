#include <stdlib.h>
#include "libft.h"

static char     chipper(unsigned int n, char c)
{
    if (((c < 90) && ((c + n)  > 90)) || ((c > 97) && ((c + n) > 122)))
        return ((c + n) - 25);
    return (c + n);
}

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *str;
    int     i;

    i = (int)ft_strlen(s);
    str = (char*)malloc(sizeof(char) * i);
    if (!str) return (NULL);
    str[i--] = '\0';
    while (i >= 0)
    {
        str[i] = f(5, s[i]);
        i--;
    }
    return (str);
}
