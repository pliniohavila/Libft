#include <stdio.h>
#include <string.h>
#include "libft.h"

#define SIZE 30


int     main(void)
{
    char    buf1[SIZE];
    char    buf2[SIZE];

    memset(buf1, 0, SIZE);
    memset(buf2, 0, 10);
    // strcpy(buf1, "Chiquita and Mel!");
    ft_strlcpy(buf1, "Chiquita ", SIZE);
    ft_strlcpy(buf2, "and Mel!", SIZE);
    // strcpy(buf2, "Chiquita and Mel!");
    ft_strlcat(buf1, buf2, sizeof(buf1));
    printf("[INFO]: %s\n", buf1);
    // printf("ft_strlen: %d\n", (int)ft_strlen(buf1));
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

size_t  ft_strlcpy(char *dst, const char *src, size_t n)
{
    size_t      i;

    if ((!dst) && (!src))
        return (0);
    if (n == 0)
        return (ft_strlen(src));
    i = 0;
    while ((src[i] != '\0') && i < (n - 1))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}

size_t  ft_strlcat(char *dst, const char *src, size_t n)
{
    size_t      i;

    if ((!dst) && (!src))
        return (0);
    if (n == 0)
        return (ft_strlen(src));
    i = ft_strlen(dst);
    while ((*src != '\0') && (i < (n - 1)))
        dst[i++] = *src++;
    dst[i] = '\0';
    return (n + ft_strlen(src));
}