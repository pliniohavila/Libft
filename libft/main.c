#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

#define SIZE 30

int     main(void)
{
    char    *buf1 = "In this example, two arrays of 14 characters each are created. The contents of the string literals blah and hmm are copied into these arrays ";
    char    **buf2;

    // memset(buf1, 0, SIZE);
    // memset(buf2, 0, SIZE);
    // strcpy(buf2, " vtr");
    buf2 = ft_split(buf1, 32);
    for (int i = 0; buf2[i] != NULL; i++)
        printf("%s - ", buf2[i]);
    // printf("[INFO] %s\n", buf1);
    // printf("[INFO] %s\n", ft_strtrim(buf1, buf2));
    printf("\n");
    return (0);
}

static int     get_qtd_split(char const *s, char c)
{
    int         i;
    int         qtd_split;

    i = 0;
    qtd_split = 0;
    while(s[i] != '\0') 
    {
        if (s[i] == c)
            qtd_split++;
        i++;
    }
    return (i);
}

static  char    *str_splitted(const char *s, int start, int end)
{
    char        *str;

    str = (char*)malloc(sizeof(char) * ((end - start) + 1));
    ft_strlcpy(str, (s + start), ((end - start) + 1));
    return (str);
}

char    **ft_split(char const *s, char c)
{
    int         i;
    int         k;
    int         qtd_split;
    int         start;
    char        **divided;

    qtd_split = get_qtd_split(s, c);
    divided = (char**)malloc(sizeof(char*) * (qtd_split + 2)); // sum 2 to get last word and set null 
    if (!divided)
        return (NULL);
    i = 0;
    k = 0;
    start = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c) 
        {
            if ((divided[k] = str_splitted(s, start, i)) == NULL) 
                return (NULL);
            start = i + 1;
            k++;
        }
        i++;
    }
    if (ft_strlen(s + start) > 0)
        if ((divided[k++] = str_splitted(s, start, i)) == NULL) 
                return (NULL);
    divided[k] = NULL;
    return (divided);
}
