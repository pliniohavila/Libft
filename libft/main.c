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
    strcpy(buf1, " vtrKaramazov tr ");
    strcpy(buf2, " vtr");
    printf("[INFO] %s\n", buf1);
    printf("[INFO] %s\n", ft_strtrim(buf1, buf2));
    printf("|\n");
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char        *str;
    size_t      start;
    size_t      end;

    if (!s1)
        return (NULL);
    start = 0;
    while ((s1[start] != '\0') && (ft_strchr(set, s1[start]) != NULL))
        start++;
    end = ft_strlen(s1) - start - 1;
    while ((ft_strchr(set, s1[end]) != NULL) && (end > start))
        end--;
    str = (char*)malloc(sizeof(char) * (end - start + 2));
    if (!str)
        return (NULL);
    ft_strlcpy(str, (s1 + start), (end - 1));
    return (str);
}