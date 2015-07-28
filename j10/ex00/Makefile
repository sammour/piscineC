# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/07/21 17:10:48 by sblancha          #+#    #+#              #
#    Updated: 2015/07/21 20:40:40 by sblancha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

GCCRULES = -Werror -Wextra -Wall

SRC = ./srcs/ft_putchar.c \
	./srcs/ft_putstr.c \
	./srcs/ft_swap.c \
	./srcs/ft_strcmp.c \
	./srcs/ft_strlen.c \

OBJ = ft_putchar.o ft_putstr.o ft_swap.o ft_strcmp.o ft_strlen.o

all: $(NAME)

$(NAME): 
	gcc $(GCCRULES) -c $(SRC) -I/includes/
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
