# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/11 15:19:15 by lfallet           #+#    #+#              #
#    Updated: 2020/03/29 20:47:44 by lfallet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS += -Wall
CFLAGS += -Wextra
ifeq ($(debug), 0)
	CFLAGS += -g3
else ifeq ($(debug), 1)
	CFLAGS += -fsanitize=address
	CFLAGS += -g3
else ifeq ($(debug), 2)
	CFLAGS += -fsanitize=address,undefined
	CFLAGS += -g3
else ifeq ($(debug), 3)
	CFLAGS += -fsanitize=address,undefined
	CFLAGS += -g3
	CFLAGS += -Wpadded
else ifeq ($(debug), 4)
	CFLAGS += -fsanitize=address,undefined
	CFLAGS += -g3
	CFLAGS += -Wpadded
	ifneq ($(CC), gcc)
		CFLAGS += -Weverything
	endif
endif
ifeq ($(err), 0)
	CFLAGS += -g3
else
	CFLAGS += -Werror
endif

CC = clang

INCLUDES = includes/

HEADER += $(INCLUDES)libft.h
HEADER += $(INCLUDES)get_next_line.h
HEADER += $(INCLUDES)vector.h

SRCS += ft_atoi.c
SRCS += ft_atoul.c
SRCS += ft_bzero.c
SRCS += ft_calloc.c
SRCS += ft_free_tab.c
SRCS += ft_isalnum.c
SRCS += ft_isalpha.c
SRCS += ft_isascii.c
SRCS += ft_isdigit.c
SRCS += ft_is_len_zero.c
SRCS += ft_isprint.c
SRCS += ft_itoa.c
SRCS += ft_ltoa_base.c
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
SRCS += ft_ultoa_base.c

SRCS += ft_lstadd_back.c
SRCS += ft_lstadd_front.c
SRCS += ft_lstclear.c
SRCS += ft_lstdelone.c
SRCS += ft_lstiter.c
SRCS += ft_lstlast.c
SRCS += ft_lstmap.c
SRCS += ft_lstnew.c
SRCS += ft_lstsize.c

SRCS += vct_add.c
SRCS += vct_addstr.c
SRCS += vct_del.c
SRCS += vct_getlen.c
SRCS += vct_getstr.c
SRCS += vct_new.c
SRCS += vct_resize.c
SRCS += vct_nlen.c
SRCS += vct_clen.c
SRCS += vct_print.c
SRCS += vct_print_fd.c
SRCS += vct_printendl.c
SRCS += vct_printendl_fd.c
SRCS += vct_pop.c

SRCS += get_next_line.c
SRCS += get_next_line_multifd.c
SRCS += get_next_line_utils.c

SRCS += libftprintf.c
SRCS += printf_misc.c
SRCS += state_machine.c
SRCS += atoul.c
SRCS += utils_precision_width.c
SRCS += utils_string.c
SRCS += conversion_disc.c
SRCS += conversion_pux.c
SRCS += join_p_conversion.c
SRCS += join_x_conversion.c
SRCS += process_conversion.c
SRCS += utils_di_conversion.c
SRCS += utils_p_conversion.c
SRCS += utils_x_conversion.c
SRCS += ft_ltoa_base_post.c
SRCS += utils_number.c

vpath %.c sources/
vpath %.c sources/conversion/
vpath %.c sources/initialisation/
vpath %.c sources/is_something/
vpath %.c sources/list/
vpath %.c sources/malloc/
vpath %.c sources/mem/
vpath %.c sources/print/
vpath %.c sources/tab/
vpath %.c sources/PROJECT_GET_NEXT_LINE/
vpath %.c sources/PROJECT_PRINTF/
vpath %.c sources/PROJECT_PRINTF/conversion/
vpath %.c sources/PROJECT_PRINTF/utils/
vpath %.c sources/PROJECT_PRINTF/parser/
vpath %.c sources/string/
vpath %.c sources/to_something/
vpath %.c sources/vector/

OBJS = $(patsubst %.c, $(OBJS_DIR)%.o, $(SRCS))
OBJS_DIR = ./objs/

all : $(OBJS_DIR) $(NAME)

$(OBJS_DIR):
	mkdir $@

$(NAME): $(OBJS)
	ar rcs $@ $^

$(OBJS) : $(OBJS_DIR)%.o: %.c $(HEADER) Makefile
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

clean :
	$(RM) -R $(OBJS_DIR)

fclean : clean
	$(RM) $(NAME)

re : fclean
	$(MAKE)

.PHONY: all bonus clean fclean re
#.SILENT:
