NAME      = main
CC        = c++ -std=c++98
FLAGS     = -Wall -Wextra -Werror -g 
RM        = rm -fr
OBJDIR    = .obj
FILES     = main PmergeMe
SRC       = $(FILES:=.cpp)
OBJ       = $(addprefix $(OBJDIR)/, $(FILES:=.o))
INCLUEDES = PmergeMe.hpp

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: %.cpp $(INCLUEDES)
	mkdir -p $(dir $@)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJDIR) $(OBJ)

fclean: clean
	$(RM)  $(NAME)

re: fclean all
.PHONY: all clean fclean re

