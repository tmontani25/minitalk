# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmontani <tmontani@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/23 17:26:21 by tmontani          #+#    #+#              #
#    Updated: 2024/04/23 17:29:34 by tmontani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom du programme final
NAME = minitalk

# Compilateur à utiliser
CC = gcc

# Options de compilation
CFLAGS = -Wall -Wextra -Werror -g 

# Liste des fichiers source pour push_swap
SRCS_MINITALK = client.c server.c

# Liste des fichiers objets pour push_swap
OBJS_MINITALK = $(SRCS_MINITALK:.c=.o)

all: $(NAME)
# Règle par défaut : construit le programme push_swap en reliant les fichiers objets et la bibliothèque libft
$(NAME): $(OBJS_MINITALK)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS_MINITALK)

# Règle générique pour générer les fichiers objets à partir des fichiers source
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS_MINITALK)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re