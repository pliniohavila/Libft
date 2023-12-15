#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

#define SIZE 30 

int     main(void)
{
    char    buf1[SIZE];
    char    *buf2;

    memset(buf1, 0, SIZE);
    // memset(buf2, 0, SIZE);
    strcpy(buf1, "Caporez");
    // buf2 = ft_strmapi(buf1, &chipper);
    printf("[INFO] %s - %s\n", buf1, buf2);
    return (0);
}
