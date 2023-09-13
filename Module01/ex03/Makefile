NAME = Weapon
CC   = g++ -Wall -Wextra -Werror -std=c++98
SRC  =  HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
INC  =  HumanA.hpp HumanB.hpp Weapon.hpp
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
