NAME = BSP
CC   = g++ -Wall -Wextra -Werror -std=c++98
SRC  = Fixed.cpp Point.cpp bsp.cpp main.cpp
INC  = Fixed.hpp Point.hpp
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
