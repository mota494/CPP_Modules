NAME = easyfind
SRC = main.cpp
CPP_FLAG = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	c++ $(CPP_FLAG) $(SRC) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: fclean all
