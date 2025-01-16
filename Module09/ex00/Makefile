NAME      = main
CC        = c++ -std=c++98
FLAGS     = -Wall -Wextra -Werror
RM        = rm -fr
OBJDIR    = .obj
FILES     = BitcoinExchange main
SRC       = $(FILES:=.cpp)
OBJ       = $(addprefix $(OBJDIR)/, $(FILES:=.o))
INCLUEDES = BitcoinExchange.hpp

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

