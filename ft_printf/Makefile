# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 14:14:14 by tmontani          #+#    #+#              #
#    Updated: 2024/04/25 19:26:50 by tmontani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
SRCS =	ft_printf_utils.c \
		ft_printf.c \
		ft_printf_utils1.c \
		ft_printf_utils2.c \
		
OBJS = $(SRCS:.c=.o)

all: $(NAME) $(OBJS)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) $(BOBJS)

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re