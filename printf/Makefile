# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esordone <esordone@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 12:35:16 by esordone          #+#    #+#              #
#    Updated: 2022/10/19 10:50:59 by esordone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIB = ar -rsc

SRC = ft_printf.c \
	  source/ft_putstr_fd.c \
	  source/ft_putnbr_fd.c \
	  source/ft_putchar.c \

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
