CC = gcc

СFLAGS = -Wall -Wextra -Werror

NAME = libft.a
SRCS = ft_substr.c ft_strdup.c ft_split.c ft_strjoin.c ft_strtrim.c ft_atoi.c ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	$(RM) $(OBJS) $(OBJS_B)
	
fclean: clean
	rm -f $(NAME)
re: clean all

.PHONY: all clean fclean re