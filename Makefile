# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfallet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/04 11:57:44 by lfallet           #+#    #+#              #
#    Updated: 2019/11/04 11:59:41 by lfallet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c \
		srcs/ft_strcmp.c //!!A MODIFIER!!//
OBJS = srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o \
		srcs/ft_strcmp.o //!!A MODIFIER!!//
INC = includes/
HEADER = $(INC)ft.h
CFLAGS = -Wall -Wextra -Werror
CC = gcc

all : $(NAME)
$(NAME) : $(OBJS)
	ar rcs $@ $^
$(OBJS) : srcs/%.o: srcs/%.c $(HEADER)
	$(CC) $(CFLAGS) -I$(INC) -c $< -o $@
clean :
	$(RM) $(OBJS)
fclean : clean
	$(RM) $(NAME)
re : fclean all
.PHONY: all clean fclean re
