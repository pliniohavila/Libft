#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

#define SIZE 30

int     main(void)
{
    // char    *buf1;
    // char    *buf2;

    // memset(buf1, 0, SIZE);
    // memset(buf2, 0, SIZE);
    // strcpy(buf2, " vtr");
    // buf2 = ft_split(buf1, 32);
    // for (int i = 0; buf2[i] != NULL; i++)
    //     printf("%s - ", buf2[i]);
    // printf("[INFO] %s\n", ft_itoa(1212));
    // printf("[INFO] %s\n", ft_itoa(42));
    // printf("[INFO] %s\n", ft_itoa(4));
    // printf("[INFO] %s\n", ft_itoa(0));
    printf("[INFO] %s\n", ft_itoa(-42));
    printf("\n");
    return (0);
}

static int      c_digits(int n)
{
    int     count_dgts;
    
    count_dgts = 0;
    while (n > 0)
    {
        count_dgts++;
        n = (n - (n % 10)) / 10;
    }
    return (count_dgts);
}

char    *ft_itoa(int n)
{
    int     count_dgts;
    int     negative;
    char    *itoa;

    negative = 0;
    count_dgts = 0;
    if (n < 0)
    {
        negative = 1;
        count_dgts++;
        n = n * (-1);
    }
    count_dgts += (c_digits(n) + 1);   
    // printf("count_dgts: %d\n", count_dgts); 
    itoa = (char*)malloc(sizeof(char) * count_dgts);
    if (!itoa)
        return (NULL);
    if (negative)
        itoa[0] = '-';
    itoa[count_dgts--] = '\0';
    while (n > 0)
    {
        itoa[count_dgts--] = (char)((n % 10) + 48);
        printf("itoa: %s\n", itoa); 
        n = (n - (n % 10)) / 10;
    }
    return (itoa);
}