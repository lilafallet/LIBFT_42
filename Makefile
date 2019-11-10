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

CC = clang

CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Werror

INC = ./
HEADER = libft.h

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
SRCS += ft_strjoin.c
SRCS += ft_strlcat.c
SRCS += ft_strlcpy.c
SRCS += ft_strlen.c
SRCS += ft_strmapi.c
SRCS += ft_strncmp.c
SRCS += ft_strnstr.c
SRCS += ft_strrchr.c
SRCS += ft_strtrim.c
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

PERSO += ft_putchar.c
PERSO += ft_putstr.c

OBJS = $(patsubst %.c, %.o, $(SRCS))
OBJS_BONUS = $(patsubst %.c, %.o, $(BONUS))
OBJS_PERSO = $(patsubst %.c, %.o, $(PERSO))


all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $@ $^

$(OBJS) : %.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -I$(INC) -c $< -o $@

clean :
	$(RM) $(OBJS)
	$(RM) $(OBJS_BONUS)
	$(RM) $(OBJS_PERSO)

fclean : clean
	$(RM) $(NAME)

re : fclean all

bonus : $(OBJS) $(OBJS_BONUS)
	ar rcs $(NAME) $^
	
$(OBJS_BONUS) : %.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -I$(INC) -c $< -o $@

perso : $(OBJS) $(OBJS_BONUS) $(OBJS_PERSO)
	ar rcs $(NAME) $^

$(OBJS_PERSO) : %.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -I$(INC) -c $< -o $@

.PHONY: all clean fclean re bonus perso
#.SILENT:
