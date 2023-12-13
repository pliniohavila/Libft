#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

#define SIZE 30

int     main(void)
{
    char    buf1[SIZE];
    char    buf2[SIZE];

    memset(buf1, 0, SIZE);
    memset(buf2, 0, SIZE);
    strcpy(buf1, "Dmitry");
    strcpy(buf2, " Karamazov");
    printf("[INFO] %s\n", ft_strjoin(buf1, buf2));
    return (0);
}

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