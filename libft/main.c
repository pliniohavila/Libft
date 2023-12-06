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
    strcpy(buf1, "Chiquita and Mel!");
    // strcpy(buf2, "Chiquita and Mel!");
    printf("strlen: %d\n", (int)strlen(buf1));
    printf("ft_strlen: %d\n", (int)ft_strlen(buf1));
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