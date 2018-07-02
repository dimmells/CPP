# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/28 14:37:16 by dmelnyk           #+#    #+#              #
#    Updated: 2018/06/28 14:37:18 by dmelnyk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

FLAGS = -Wall -Wextra -Werror

SRC = iter.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	clang++ $(FLAGS) -c -I. $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
