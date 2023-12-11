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
    strcpy(buf1, "Yavana!");
    strcpy(buf2, "Yavana!");
    printf("[INFO] [strdup]     %s\n", strdup(buf1));
    printf("[INFO] [ft_strdup]  %s\n", ft_strdup(buf2));
    return (0);
}

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
