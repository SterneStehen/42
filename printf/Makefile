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

TARGET = libftprintf.a

CC = cc

SRC = $(wildcard *c)
OBJ = $(patsubst %.c, %.o, $(SRC))

$(TARGET) : $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

# libftprintf : main.o ft_printf.o ft_put.o
# 	cc main.o ft_printf.o ft_put.o libftprintf

%.o : %.c 
	$(CC) -c $< -o $@


# %.c : %.o 
# 	$(CC) -c $(SRC) -o $(OBJ)

# $(TARGET) : main.o ft_printf.o ft_put.o
# 	main.o ft_printf.o ft_put.o -o $(TARGET)

# main.o : main.c
# 	$(CC) -c main.c -o main.o

# ft_printf.o : ft_printf.c
# 	$(CC) -c ft_printf.c -o ft_printf.o

# ft_put.o : ft_put.c
# 	$(CC) -c ft_put.c -o ft_put.o

clean :
	rm $(TARGET) *.o