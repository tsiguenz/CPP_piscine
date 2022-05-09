# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/09 17:55:43 by tsiguenz          #+#    #+#              #
#    Updated: 2022/05/09 18:21:24 by tsiguenz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = megaphone.cpp
OBJ = $(SRC:.c=.o)


$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(NAME)

.PHONY: all clean
