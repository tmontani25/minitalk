# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/23 17:26:21 by tmontani          #+#    #+#              #
#    Updated: 2024/04/26 09:31:29 by tmontani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk

SRC_SERVER = server.c lib.c
SRC_CLIENT = client.c lib.c

OBJ_SERVER = $(SRC_SERVER:.c=.o)
OBJ_CLIENT = $(SRC_CLIENT:.c=.o)

CC = gcc
CC_FLAGS = -Wall -Wextra -Werror

FT_PRINTF_DIR = ft_printf
FT_PRINTF = ./ft_printf/libftprintf.a


%.o: %.c
	@$(CC) $(CC_FLAGS) -c $< -o $@

all: server client

server: $(OBJ_SERVER) $(FT_PRINTF)
	@$(CC) $(CC_FLAGS) $(OBJ_SERVER) $(FT_PRINTF) -o server

client: $(OBJ_CLIENT) $(FT_PRINTF)
	@$(CC) $(CC_FLAGS) $(OBJ_CLIENT) $(FT_PRINTF)  -o client

$(FT_PRINTF):
	make -C ft_printf

clean:
	rm -rf $(OBJ_SERVER) $(OBJ_CLIENT)
	make -C $(FT_PRINTF_DIR) clean

fclean: clean
	rm -f server
	rm -f client
	make -C $(FT_PRINTF_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
