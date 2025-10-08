NAME = scalar
SRC = main.cpp Scalar.cpp
CPP_FLAG = -g -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	c++ $(CPP_FLAG) $(SRC) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: fclean all
