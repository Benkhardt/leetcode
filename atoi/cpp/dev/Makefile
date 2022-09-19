# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbenkhar <dbenkhardt@student.42wolfsburg.d +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/18 13:19:56 by dbenkhar          #+#    #+#              #
#    Updated: 2022/09/19 00:06:31 by dbenkhar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		myAtoi

CC =		clang++

CFLAGS =	-Wall -Werror -Wextra -g

SRC	=		main.cpp \
			myAtoi.cpp \
			utils.cpp \

OBJ =		$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
