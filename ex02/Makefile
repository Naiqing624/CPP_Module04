NAME = ex03

CPP = c++
CPPFLAG = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp \
	Animal.cpp \
	Dog.cpp \
	Cat.cpp \
	Brain.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAG) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CPP) $(CPPFLAG) -c $< -o $@

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re