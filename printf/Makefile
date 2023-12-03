# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smoreron <7353718@gmail.com>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/21 16:15:22 by smoreron          #+#    #+#              #
#    Updated: 2023/11/21 16:15:22 by smoreron         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libftprintf.a

SRC = ft_printf.c ft_put.c
OBJ = $(patsubst %.c, %.o, $(SRC))

CC = cc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

# $(NAME): $(OBJ)
# 	$(CC) $(OBJ) -o $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f *.o

fclean :
	rm -f $(NAME) *.o

re :
	fclean all

.PHONY: all clean fclean re

