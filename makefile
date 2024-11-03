NAME = libft.a
SRCS = ft_substr.c ft_strjoin ft_strtrim.c ft_split.c ft_itoa ft_strmapi.c \
	   ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	   ft_putnbr_fd.c ft_isalpha.c ft_isdigit.c ft_isprint.c ft_strlen.c \
	   ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat \
	   ft_toupper.c ft_tolower.c ft_strchr ft_strrchr.c ft_strncmp ft_memchr.c \
	   ft_memcmp.c ft_strnstr.c ft_atoa.c ft_calloc.c ft_strdup.c
OBJS = $(SRCS:.c = .o)

cc = cc
CFLAGS = -Werror -Wextra -Wall
ARFLAGS = -rcs
all : $(NAME)

$(NAME) : $(OBJS) libft.h
	ar ARFLAGS $(NAME).a $(OBJS)

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.phony: clean 