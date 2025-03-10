# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/10 15:40:48 by mloureir          #+#    #+#              #
#    Updated: 2025/03/10 15:59:06 by mloureir         ###   ########.pt        #
#                                                                              #
# **************************************************************************** #

NAME = ex02 
SRC = main.cpp
CPP_FLAGS = -Wall -Wextra -Werror -g -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	c++ $(CPP_FLAGS) $(SRC) -o $(NAME) 

clean:
	rm $(NAME)

fclean: clean

re: fclean all


