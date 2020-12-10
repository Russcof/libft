# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/06 10:01:48 by mtellal           #+#    #+#              #
#    Updated: 2020/12/09 14:18:52 by mtellal          ###   ########.fr        #
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

$(NAME): $(OBJ) libft.h
	ar rc $@ $<
	ranlib $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
