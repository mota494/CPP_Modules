NAME = MoarForms
SRC = Bureaucrat.cpp AForm.cpp main.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
CPP_FLAG = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	c++ $(CPP_FLAG) $(SRC) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: fclean all
