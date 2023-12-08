#include <stdio.h>
#include <string.h>
#include "libft.h"

#define SIZE 30


int     main(void)
{
    char    buf1[SIZE];
    // char    buf2[SIZE];

    memset(buf1, 0, SIZE);
    // memset(buf2, 0, SIZE);
    strcpy(buf1, "Chaquita");
    // strcpy(buf2, "Chiquita");
    printf("[INFO]: %d\n", strncmp(buf1, buf1, 0));
    // printf("[INFO]: %d\n", ft_strncmp(buf1, buf1, 0));
    return (0);
}

size_t      ft_strlen(const char *s)
{
    size_t      i;

    i = 0;
    while (*s++)
        i++;
    return(i);
}

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