#include "libft.h"

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
