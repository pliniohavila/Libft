#include <stdio.h>
#include <string.h>
// #include <bsd/string.h>
#include "libft.h"

#define SIZE 30


int     main(void)
{
    char    buf1[SIZE];
    // char    buf2[SIZE];

    memset(buf1, 0, SIZE);
    // memset(buf2, 0, 10);
    strcpy(buf1, "Chiquita and Mel!");
    // ft_strlcpy(buf1, "Chiquita ", SIZE);
    // ft_strlcpy(buf2, "and Mel!", SIZE);
    printf("[INFO]: %s\n", ft_strnstr(buf1, "and", ft_strlen(buf1)));
    // printf("[INFO]: %s\n", strnstr(buf1, "and", 5));
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