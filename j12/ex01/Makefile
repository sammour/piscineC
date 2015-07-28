# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/07/24 03:34:10 by sblancha          #+#    #+#              #
#    Updated: 2015/07/24 12:23:52 by sblancha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat 

RULES = -Werror -Wall -Wextra

SRC = ft_read0.c ft_display_file.c ft_putstr.c ft_strlen.c main.c

OBJ = ft_read0.o ft_display_file.o ft_putstr.o ft_strlen.o main.o

all: $(NAME)

$(NAME):
	gcc $(RULES) -c $(SRC)
	gcc $(RULES) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
