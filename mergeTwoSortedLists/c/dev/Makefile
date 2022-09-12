# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbenkhar <dbenkhardt@student.42wolfsburg.d +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/12 16:40:10 by dbenkhar          #+#    #+#              #
#    Updated: 2022/09/12 22:10:37 by dbenkhar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	mergeLists

CC	=	gcc

CFLAGS	=	-Wall -Werror -Wextra -g3

SRC	=	main.c \
		utils.c \
		merge.c \

OBJ	=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re