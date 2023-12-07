#include <stdio.h>
#include <string.h>
#include "libft.h"

#define SIZE 30


int     main(void)
{
    char    buf1[SIZE];
    // char    buf2[SIZE];

    memset(buf1, 0, SIZE);
    // memset(buf2, 0, 10);
    strcpy(buf1, "Chiquita and Mel!");
    // ft_strlcpy(buf1, "Chiquita ", SIZE);
    // ft_strlcpy(buf2, "and Mel!", SIZE);
    // // strcpy(buf2, "Chiquita and Mel!");
    // ft_strlcat(buf1, buf2, sizeof(buf1));
    printf("[INFO]: %s\n", ft_strrchr(buf1, 'i'));
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

char    *ft_strrchr(const char *s, size_t c)
{
    size_t      i;
    char        cmp;

    i = ft_strlen(s);
    cmp = (char)c;
    while (i > 0)
    {
        if (s[i] == cmp)
            return ((char*)&s[i]);
        i--;
    }
    return (NULL);
}