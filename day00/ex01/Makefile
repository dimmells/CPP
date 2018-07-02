# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/19 11:53:35 by dmelnyk           #+#    #+#              #
#    Updated: 2018/06/19 11:53:48 by dmelnyk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

FLAGS = -Wall -Werror -Wextra

OBJ = $(SRC:.cpp=.o)

SRC =

SRC += Contact.class.cpp
SRC += main.cpp

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
