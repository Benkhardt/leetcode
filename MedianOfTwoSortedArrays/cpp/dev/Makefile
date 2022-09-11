# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbenkhar <dbenkhardt@students.42wolfsburg. +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/10 05:46:43 by dbenkhar          #+#    #+#              #
#    Updated: 2022/09/11 04:35:16 by dbenkhar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = median

CC = clang++

CFLAGS = -Wall -Werror -Wextra

SRC =	main.cpp \
		findMedianSortedArrays.cpp \
		mergeArrays.cpp \

OBJ = $(SRC:.cpp=.opp)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

debug: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -g
