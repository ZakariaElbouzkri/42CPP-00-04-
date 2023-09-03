NAME = harlFilter
CC = c++ -Wall -Wextra -Werror -std=c++98
RM = rm -f
SRC = Harl.cpp main.cpp 
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $^ -o $@

%.o : %.cpp Harl.hpp
	$(CC) -c $< -o $@

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
