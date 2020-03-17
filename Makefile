# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/11 15:19:15 by lfallet           #+#    #+#              #
#    Updated: 2020/03/14 13:15:16 by lfallet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Werror
ifeq ($(debug), 1)
	CFLAGS += -fsanitize=address,undefined
	CFLAGS += -g3
endif

CC = clang

INCLUDES = ./

HEADER += $(INCLUDES)libft.h
HEADER += $(INCLUDES)get_next_line.h

SRCS += ft_atoi.c
SRCS += ft_bzero.c
SRCS += ft_calloc.c
SRCS += ft_isalnum.c
SRCS += ft_isalpha.c
SRCS += ft_isascii.c
SRCS += ft_isdigit.c
SRCS += ft_isprint.c
SRCS += ft_itoa.c
SRCS += ft_memccpy.c
SRCS += ft_memchr.c
SRCS += ft_memcmp.c
SRCS += ft_memcpy.c
SRCS += ft_memdup.c
SRCS += ft_memjoin_free.c
SRCS += ft_memmove.c
SRCS += ft_memset.c
SRCS += ft_putchar_fd.c
SRCS += ft_putendl_fd.c
SRCS += ft_putnbr_fd.c
SRCS += ft_putstr_fd.c
SRCS += ft_split.c
SRCS += ft_strchr.c
SRCS += ft_strdup.c
SRCS += ft_strndup.c
SRCS += ft_strjoin.c
SRCS += ft_strlcat.c
SRCS += ft_strlcpy.c
SRCS += ft_strlen.c
SRCS += ft_strmapi.c
SRCS += ft_strncmp.c
SRCS += ft_strnstr.c
SRCS += ft_strrchr.c
SRCS += ft_strtrim.c
SRCS += ft_striter.c
SRCS += ft_substr.c
SRCS += ft_tolower.c
SRCS += ft_toupper.c

SRCS += ft_lstadd_back.c
SRCS += ft_lstadd_front.c
SRCS += ft_lstclear.c
SRCS += ft_lstdelone.c
SRCS += ft_lstiter.c
SRCS += ft_lstlast.c
SRCS += ft_lstmap.c
SRCS += ft_lstnew.c
SRCS += ft_lstsize.c

SRCS += get_next_line.c
SRCS += get_next_line_multifd.c
SRCS += get_next_line_utils.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

$(OBJS) : %.o: %.c $(HEADER) Makefile
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

clean :
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean : clean
	$(RM) $(NAME)

re : fclean
	$(MAKE)

.PHONY: all bonus clean fclean re
#.SILENT:
