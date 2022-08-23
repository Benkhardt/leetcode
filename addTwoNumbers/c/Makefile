# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbenkhar <dbenkhardt@students.42wolfsburg. +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/24 01:14:12 by dbenkhar          #+#    #+#              #
#    Updated: 2022/08/24 01:21:18 by dbenkhar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = addTwo

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC =	main.c \
		addTwoNumbers.c \
		utils.c \

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

.PHONY: all clean fclean re
