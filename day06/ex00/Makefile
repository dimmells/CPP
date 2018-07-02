# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/27 15:33:39 by dmelnyk           #+#    #+#              #
#    Updated: 2018/06/27 15:33:40 by dmelnyk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

FLAGS = -Wall -Wextra -Werror

SRC = main.cpp

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
