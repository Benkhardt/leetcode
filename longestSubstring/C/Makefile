# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbenkhar <dbenkhardt@students.42wolfsburg. +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/09 13:29:05 by dbenkhar          #+#    #+#              #
#    Updated: 2022/09/09 13:32:35 by dbenkhar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sub

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC =	main.c\
		substring.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

debug: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -g
