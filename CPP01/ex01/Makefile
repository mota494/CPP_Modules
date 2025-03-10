NAME = horde 
SRC = Zombie.cpp main.cpp zombieHorde.cpp
CPP_FLAGS = -Wall -Wextra -Werror -g -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	c++ $(CPP_FLAGS) $(SRC) -o $(NAME) 

clean:
	rm $(NAME)

fclean: clean

re: fclean all


