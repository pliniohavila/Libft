#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

#define SIZE 30


int     main(void)
{
    char    buf1[SIZE];
    // char    buf2[SIZE];

    memset(buf1, 0, SIZE);
    // memset(buf2, 0, SIZE);
    strcpy(buf1, "Aa-20 \nT5;9z");
    // strcpy(buf2, "Chiquita"); 
    printf("Check[%c]: %d\n", buf1[0], ft_isprint(buf1[0]));

    // printf("[INFO]: %d\n", strncmp(buf1, buf1, 0));
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

int     ft_isupper(int c)
{
    if ((c >= 65) && (c <= 90))
        return (1);
    return (0);
}

int     ft_islower(int c)
{
    if ((c >= 97) && (c <= 122))
        return (1);
    return (0);
}

int     ft_isalpha(int c)
{
    if (ft_isupper(c) || ft_islower(c))
        return (1);
    return (0);
}

int     ft_isdigit(int c)
{
    if ((c >= 48) && (c <= 57))
        return (1);
    return (0);
}

int     ft_isalnum(int c)
{
    if (ft_isalpha(c) || ft_isdigit(c))
        return (1);
    return (0);
}

int     ft_isascii(int c)
{
    if (c <= 127)
        return (1);
    return (0);
}

int     ft_isprint(int c)
{
    if ((c >= 32) && (c <= 126))
        return (1);
    return (0);
}