# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelouarg <anas.elouargui@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/25 07:41:40 by aelouarg          #+#    #+#              #
#    Updated: 2018/11/25 07:41:41 by aelouarg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
SRC = *.c
OBJ = *.o
HEAD = tetris.h
FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(HEAD)
	@gcc -c $(FLAG) $(SRC)
	@gcc $(FLAG) $(OBJ) -o $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
