# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/11 15:19:15 by lfallet           #+#    #+#              #
#    Updated: 2020/02/15 12:07:54 by lfallet          ###   ########.fr        #
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

HEADER = $(INCLUDES)libft.h

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

BONUS += ft_lstadd_back.c
BONUS += ft_lstadd_front.c
BONUS += ft_lstclear.c
BONUS += ft_lstdelone.c
BONUS += ft_lstiter.c
BONUS += ft_lstlast.c
BONUS += ft_lstmap.c
BONUS += ft_lstnew.c
BONUS += ft_lstsize.c

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(BONUS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

bonus : $(OBJS_BONUS) $(OBJS)
	ar rcs $(NAME) $^

$(OBJS) : %.o: %.c $(HEADER) Makefile
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

$(OBJS_BONUS) : %.o: %.c $(HEADER) Makefile
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

clean :
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean : clean
	$(RM) $(NAME)

re : fclean
	$(MAKE)

.PHONY: all bonus clean fclean re
#.SILENT:
