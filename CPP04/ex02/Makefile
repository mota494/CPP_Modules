NAME = Abstract
SRC = Brain.cpp WrongAnimal.cpp WrongCat.cpp Animal.cpp Dog.cpp Cat.cpp main.cpp
CPP_FLAGS = -Wall -Wextra -Werror -g -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	c++ $(CPP_FLAGS) $(SRC) -o $(NAME) 

clean:
	rm $(NAME)

fclean: clean

re: fclean all
