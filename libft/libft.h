#ifndef LIBFT_H
#define LIBFT_H

void    *ft_memcpy(void *dest, void *src, size_t n);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, void *src, size_t n);
void    *ft_memccpy(void *dest, void *src, int c, size_t n);
void    *ft_memmove(void *dest, void *src, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
size_t  ft_strlen(const char *s);
size_t  ft_strlcpy(char *dst, const char *src, size_t n);
size_t  ft_strlcat(char *dst, const char *src, size_t n);

#endif                    