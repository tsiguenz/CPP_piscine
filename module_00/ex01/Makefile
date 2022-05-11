# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/09 17:55:43 by tsiguenz          #+#    #+#              #
#    Updated: 2022/05/11 18:58:00 by tsiguenz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MyAwesomePhonebook

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC_PATH = src/
OBJ_PATH = obj/

SRC_NAME = Contact.cpp main.cpp PhoneBook.cpp
OBJ_NAME = $(SRC_NAME:.cpp=.o)

OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))
SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp
	mkdir -p obj/
	$(CC) $(FLAGS) -o $@ -c $<

all: $(NAME)

clean:
	rm -rf obj

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
