NAME = iAmSoAbstract

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g3
RM = rm -rf

FILES = main src/Animal src/Dog src/Cat src/WrongAnimal src/WrongCat src/Brain src/AnimalBase
OBJ = $(FILES:=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
