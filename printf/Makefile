# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esordone <esordone@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 12:35:16 by esordone          #+#    #+#              #
#    Updated: 2022/10/20 10:45:11 by esordone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIB = ar -rsc

SRC = ft_printf.c \
	  source/ft_putstr.c \
	  source/ft_putnbr.c \
	  source/ft_putchar.c \
	  source/ft_check_format.c \
	  source/ft_put_pointer.c

INCLUDE = ft_printf.h

OBJ = $(SRC:.c=.o)

CC = gcc

FLAGS = -Wall -Werror -Wextra

CLEAN = rm -rf

%.o : %.c $(INCLUDE) Makefile
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

clean:
	$(CLEAN) $(OBJ)

fclean: clean
	$(CLEAN) $(NAME)

re: all fclean

.PHONY: all clean fclean re
