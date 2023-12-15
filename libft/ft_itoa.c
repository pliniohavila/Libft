#include <stdlib.h>
#include "libft.h"

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

    if (n == 0) return "0";
    negative = 0;
    count_dgts = 0;
    if (n < 0)
    {
        negative = 1;
        count_dgts++;
        n = n * (-1);
    }
    count_dgts += (c_digits(n));   
    itoa = (char*)malloc(sizeof(char) * count_dgts);
    if (!itoa) 
        return (NULL);
    if (negative)
        itoa[0] = '-';
    itoa[count_dgts--] = '\0';
    while (n > 0)
    {
        itoa[count_dgts--] = (char)((n % 10) + 48);
        n = (n - (n % 10)) / 10;
    }
    return (itoa);
}