#include <unistd.h>
#include "libft.h"

void    ft_putstr(const char *str)
{
    while (*str != '\0') 
    {
        write(1, str, 1);
        str++;
    }
}
