# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbenkhar <dbenkhardt@students.42wolfsburg. +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/23 23:44:44 by dbenkhar          #+#    #+#              #
#    Updated: 2022/08/23 23:52:33 by dbenkhar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = reverse

CC = clang++

CFLAGS = -Wall -Werror -Wextra

SRC =	main.cpp \
		reverse.cpp \
		utils.cpp \

OBJ = $(SRC:.cpp=.o)

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
