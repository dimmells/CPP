# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/20 12:05:15 by dmelnyk           #+#    #+#              #
#    Updated: 2018/06/20 12:05:17 by dmelnyk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

FLAGS = -Wall -Werror -Wextra

OBJ = $(SRC:.cpp=.o)

SRC = main.cpp

all: $(NAME)

$(NAME): $(OBJ)
	clang++ -o $(NAME) $(OBJ)

%.o: %.c
	clang++ $(FLAGS) -c -I. $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
