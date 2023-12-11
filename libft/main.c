#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"

#define SIZE 30


int     main(void)
{
    int    *buf1;
    int    *buf2;

    buf1 = (int*)calloc(10, sizeof(int));
    buf2 = (int*)ft_calloc(10, sizeof(int));

    printf("\nCom calloc: ");
    for(int i = 0; i < 10; i++)
        printf("%d ", buf1[i]);

    printf("\nCom ft_calloc: ");
    for(int i = 0; i < 10; i++)
        printf("%d ", buf2[i]);

    return (0);
}

char 	*ft_strdup(const char *s)
{

}

