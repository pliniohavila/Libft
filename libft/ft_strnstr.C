#include "libft.h"


char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    const char      *aux;
    size_t          i;

    if ((!big || !little) || (len == 0) || (ft_strlen(little) > len))
        return (NULL);
    if (ft_strlen(little) == 0)
        return ((char*)big);
    while (*big != '\0' && i < len)
    {   
        i = 0;
        if (*big == little[i])
        {
            aux = big;
            while (little[i] != '\0' && *aux != '\0' && little[i] == *aux)
            {
                aux++;
                i++;
            }
            if (little[i] == '\0' || i == len)
                return ((char*)(big));
        } 
        big++;
    }
    return (NULL);
}