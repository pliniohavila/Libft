#include <stdio.h>
#include <string.h>
#include "libft.h"

#define SIZE 30


int     main(void)
{
    char    buf1[SIZE];
    char    buf2[10];

    memset(buf1, 0, SIZE);
    memset(buf2, 0, 10);
    strcpy(buf1, "Chiquita and Mel!");
    printf("buf1 len: %d\n", (int)ft_strlen(buf1));
    // strcpy(buf2, "Chiquita and Mel!");
    int r = ft_strlcpy(buf2, buf1, sizeof(buf2));
    // int r = ft_strlcpy(buf2, buf1, 0);
    printf("R: %d\n", (int)r);
    printf("[INFO]: %s\n", buf2);
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