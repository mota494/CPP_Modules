NAME = Bitcoin
SRC = BitcoinExchange.cpp main.cpp
CPP_FLAG = -g -Wall -Wextra -Werror -std=c++98
OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(CPP_FLAG) $(SRC) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
