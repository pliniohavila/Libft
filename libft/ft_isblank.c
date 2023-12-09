#include "libft.h"

int 	ft_isblank(int c)
{
    return (((c >= 9) && (c <= 13)) || (c == 32));
}
