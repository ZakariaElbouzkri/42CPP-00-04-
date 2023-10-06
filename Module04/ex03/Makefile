NAME = Materias
CC   = c++ -Wall -Wextra -Werror -std=c++98
SRC  = AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp 
INC  = AMateria.hpp Character.hpp Cure.hpp ICharacter.hpp IMateriaSource.hpp Ice.hpp MateriaSource.hpp 
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
