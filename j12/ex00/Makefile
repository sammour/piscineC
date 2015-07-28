# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/07/24 03:34:10 by sblancha          #+#    #+#              #
#    Updated: 2015/07/24 03:47:24 by sblancha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

RULES = -Werror -Wall -Wextra

SRC = ft_putstr.c ft_strlen.c main.c

OBJ = ft_putstr.o ft_strlen.o main.o

all: $(NAME)

$(NAME):
	gcc $(RULES) -c $(SRC)
	gcc $(RULES) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
