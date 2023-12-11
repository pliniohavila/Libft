# local variables
CC		= gcc
FLAGS 	= -Wall -Wextra -Werror
NAME 	= libft.a
LIB 	= libft.h
AR 		= ar rcs
# -lbsd
# -fsanitize=address

SRC =   ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isblank.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_isupper.c \
		ft_islower.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_substr.c \


#objects
OBJS = $(SRC:.c=.o)
BOBJS = $(BSRC:.c=.o)

all:		$(NAME)

del:
	rm main

main:
	$(CC) $(FLAGS) main.c -L . -l ft -o main

$(NAME): 	$(OBJS)
	$(AR) $@ $^

clean:
	rm -f $(OBJS) $(BOBJS)

fclean: 	clean
	rm -f $(NAME)

re: 	fclean all

.PHONY: all clean fclean re
