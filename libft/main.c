#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

#define SIZE 30

int     main(void)
{
    char    buf1[SIZE];
    // char    buf2[SIZE];

    memset(buf1, 0, SIZE);
    // memset(buf2, 0, SIZE);
    strcpy(buf1, "Yavana!");
    // strcpy(buf2, "Yavana!");
    printf("[INFO] %s\n", ft_substr(buf1, 0, 3));
    printf("[INFO] %s\n", ft_substr(buf1, 3, 3));
    printf("[INFO] %s\n", ft_substr(buf1, 4, 6));
    // printf("[INFO] [ft_strdup]  %s\n", ft_strdup(buf2));
    return (0);
}

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
