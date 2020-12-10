# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/06 10:01:48 by mtellal           #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2020/12/09 14:18:52 by mtellal          ###   ########.fr        #
=======
#    Updated: 2020/12/08 18:00:27 by mtellal          ###   ########.fr        #
>>>>>>> 10503954ae2af7d9b12805eb755d414987f881e3
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memchr.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) -o $@ -c $< $(FLAGS)

<<<<<<< HEAD
$(NAME): $(OBJ) libft.h
=======
$(NAME): $(OBJ)
>>>>>>> 10503954ae2af7d9b12805eb755d414987f881e3
	ar rc $@ $<
	ranlib $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
