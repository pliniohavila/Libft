#include "libft.h"

void 	*ft_calloc(size_t nelem, size_t elsize)
{
    void    *ptr;

    if ((nelem == 0) || (elsize == 0))
        nelem = elsize = 0;
    ptr = malloc(nelem * elsize);
    if (ptr)
        ft_bzero(ptr, nelem * elsize);
    return (ptr);
}
