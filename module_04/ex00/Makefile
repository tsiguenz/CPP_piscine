# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/09 17:55:43 by tsiguenz          #+#    #+#              #
#    Updated: 2022/05/31 16:02:26 by tsiguenz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = polymorphism

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC_PATH = src/
OBJ_PATH = obj/
INC = -Iinc

SRC_NAME = main.cpp Animal.cpp Dog.cpp Cat.cpp \
		   WrongAnimal.cpp WrongDog.cpp WrongCat.cpp

OBJ_NAME = $(SRC_NAME:.cpp=.o)

OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))
SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))


$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(INC) $(OBJ) -o $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp
	mkdir -p $(@D)
	$(CC) $(FLAGS) $(INC) -MMD -c $< -o $@

-include $(OBJ:%.o=%.d)

all: $(NAME)

clean:
	rm -rf obj

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
