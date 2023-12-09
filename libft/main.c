#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"

#define SIZE 30


int     main(void)
{
    // char    buf1[SIZE];
    // char    buf2[SIZE];

    // memset(buf1, 0, SIZE);
    // memset(buf2, 0, SIZE);
    // strcpy(buf1, "A\na\rT z\ts");
    // strcpy(buf2, "Chiquita");
    // for (int i = 0; i < (int)ft_strlen(buf1); i++)
    //     printf("Check[%c]: %d\n", buf1[i], ft_isblank(buf1[i]));
    printf("[INFO] '': atoi[%d] - ft_atoi[%d]\n", atoi(""), ft_atoi(""));
    printf("[INFO] '-+58': atoi[%d] - ft_atoi[%d]\n", atoi("-+58"), ft_atoi("-+58"));
    printf("[INFO] '42': atoi[%d] - ft_atoi[%d]\n", atoi("42"), ft_atoi("42"));
    printf("[INFO] '4': atoi[%d] - ft_atoi[%d]\n", atoi("4"), ft_atoi("4"));
    printf("[INFO] '  -58a5': atoi[%d] - ft_atoi[%d]\n", atoi("  -58a5"), ft_atoi("  -58a5"));
    printf("[INFO] 'aaa': atoi[%d] - ft_atoi[%d]\n", atoi("aaa"), ft_atoi("aaa"));
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

int 	ft_isblank(int c)
{
    return (((c >= 9) && (c <= 13)) || (c == 32));
}

int		ft_atoi(const char *nbr)
{
    int     i;
    int     r;
    int     neg;

    i = 0;
    r = 0;
    neg = 1;
    while (ft_isblank(nbr[i]))
        i++;
    if (nbr[i] == '-' || nbr[i] == '+')
    {
        if (nbr[i] == '-')
            neg = (-1);
        i++;
    }
    while (ft_isdigit(nbr[i]))
    {
        r =  (r * 10) + (nbr[i] - 48);
        i++;
    }

    return (r * neg);
}
