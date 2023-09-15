# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/14 23:19:26 by zel-bouz          #+#    #+#              #
#    Updated: 2023/09/14 23:19:27 by zel-bouz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap
CC   = g++ -Wall -Wextra -Werror -std=c++98
SRC  = main.cpp ClapTrap.cpp
INC  = ClapTrap.hpp
RM   = rm -f
OBJ  = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $^ -o $@

%.o: %.cpp $(INC)
	$(CC) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
