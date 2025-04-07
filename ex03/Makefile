NAME = materia

CPP = c++

CPPFLAG = -Wall -Wextra -Werror -std=c++98 -g

SRC = src/AMateria.cpp \
	src/Character.cpp \
	src/Cure.cpp \
	src/Ice.cpp \
	src/MateriaSource.cpp \
	main.cpp

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