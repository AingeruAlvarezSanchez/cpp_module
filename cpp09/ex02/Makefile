#SHELL = /bin/zsh

NAME = PmergeMe

FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

FILES = main.cpp			\
		PmergeMe.cpp

all: $(NAME)

$(NAME): main.o PmergeMe.o
		$(CXX) $(FLAGS) $^ -o $(NAME)

%.o: %.cpp
		$(CXX) $(FLAGS) -c $< -o $@

clean:
	$(RM) main.o PmergeMe.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

