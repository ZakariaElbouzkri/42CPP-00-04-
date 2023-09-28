NAME = AMateria
CC   = g++ -Wall -Wextra -Werror -std=c++98
SRC  = main.cpp AMateria.cpp
INC  = AMateria.hpp
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
